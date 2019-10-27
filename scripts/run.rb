def get_classname(str)
  str.gsub!(/\::\w+/, "") # Remove ::before / ::after   / ::placeholder
  regex = /\.[\w'(-|\/)]*/
  match = str.match(regex)
  if match
    match[0].delete('.')
  else
    ""
  end
end

def get_variant(classname)
  if classname.match(/\//)
    classname.gsub!("/", "_")
  end

  has_minus = classname.start_with?('-')
  starting_with_number = classname.match(/^\d*/)

  case true
  when has_minus
    parts = classname.split('-')
    parts.unshift('Minus')
  when starting_with_number
    parts = classname.split('-')
    num_part = parts.shift
    parts.push(num_part)
  else
    classname.split('-')
  end.map(&:capitalize).join('')
end

def get_multi_variants_code(lines, utility_name, chunk_name)
  options = lines.map do |line|
    classname = get_classname(line)
    variant = get_variant(classname)
    [variant, classname]
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

def get_string_alias_code(line, utility_name, chunk_name)
  classname = get_classname(line)
  """
/* #{utility_name} */

type #{chunk_name} = string;

let #{chunk_name}ToJs = () => \"#{classname}\";
  """
end

def chunk_to_js(chunk)
  utility_name = chunk[0]
  chunk_name = chunk[1]
  is_multi_variant_codes = chunk[3]
  if is_multi_variant_codes
    "  | #{utility_name}(v) => #{chunk_name}ToJs(v)"
  else
    "  | #{utility_name} => #{chunk_name}ToJs()"
  end
end

def chunk_to_t(chunk)
  utility_name = chunk[0]
  chunk_name = chunk[1]
  is_multi_variant_codes = chunk[3]
  if is_multi_variant_codes
    "  | #{utility_name}(#{chunk_name})"
  else
    "  | #{utility_name}"
  end
end

def run(inputDir, outputFile)
  regex = /\w*\.txt/
  chunks = Dir[inputDir].map do |filename|
    utility_name = filename.match(regex)[0].gsub(".txt", "")
    chunk_name = utility_name.sub(utility_name[0], utility_name[0].downcase)
    lines = File.readlines(filename)
    is_multi_variant_codes = lines.length > 1
    chunk_code = if is_multi_variant_codes
                   get_multi_variants_code(lines, utility_name, chunk_name)
                 else
                   get_string_alias_code(lines[0], utility_name, chunk_name)
                 end
    [utility_name, chunk_name, chunk_code, is_multi_variant_codes]
  end

  code = """#{chunks.map { |chunk| chunk[2] }.join("\n")}

/* TW */

type t =
#{chunks.map{ |chunk| chunk_to_t(chunk) }.join("\n")};

let tToJs =
  fun
#{chunks.map{ |chunk| chunk_to_js(chunk) }.join("\n")};


let make =
  List.fold_left((result, style) => result ++ \" \" ++ tToJs(style), \"\");
"""

  File.open(outputFile, "w") { |file| file.puts code }
end

run("./data/*.txt", "../src/TW.re")
