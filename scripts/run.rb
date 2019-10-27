def get_utility_code(filename, utility_name, chunk_name)
  regex = /\.[\w'-]*/
  options = File.readlines(filename).map do |line|
    match = line.match(regex)
    if match
      classname = match[0].delete('.')
      variant = classname.split('-').map(&:capitalize).join('')
      [variant, classname]
    end
  end.compact
  """
/* #{utility_name} */

type #{chunk_name} =
#{options.map{ |option| "  | #{option[0]}" }.join("\n")};

let #{chunk_name}ToJs =
  fun
#{options.map{ |option| "  | #{option[0]} => \"#{option[1]}\"" }.join("\n")};
  """
end

def run(inputDir, outputFile)
  regex = /\w*\.txt/
  chunks = Dir[inputDir].map do |filename|
    utility_name = filename.match(regex)[0].gsub(".txt", "")
    chunk_name = utility_name.sub(utility_name[0], utility_name[0].downcase)
    code = get_utility_code(filename, utility_name, chunk_name)
    [utility_name, chunk_name, code]
  end

  code = """
#{
chunks.map do |chunk|
  chunk[2]
end.join("\n")
}

/* TW */

type t =
#{chunks.map{ |chunk| "  | #{chunk[0]}(#{chunk[1]})" }.join("\n")};

let tToJs =
  fun
#{chunks.map{ |chunk| "  | #{chunk[0]}(v) => #{chunk[1]}ToJs(v)" }.join("\n")};


let make =
  List.fold_left((result, style) => result ++ \" \" ++ tToJs(style), \"\");
  """

  File.open(outputFile, "w") { |file| file.puts code }
end

run("./data/*.txt", "../src/TW.re")
