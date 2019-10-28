class ChunkCodeGenerator
  attr_reader :utility_name, :chunk_name,
              :chunk_code, :is_multi_variant_code

  def initialize(chunk_data_filename)
    @chunk_data_filename = chunk_data_filename
    @lines = File.readlines(chunk_data_filename)
    @is_multi_variant_code = @lines.length > 1
  end

  def call
    extract_utility_name
    extract_chunk_name
    extract_chunk_code
  end

  private

  def extract_classname(str)
    str.gsub!(/\::\w+/, '') # Remove ::before / ::after   / ::placeholder
    match = str.match(%r{\.[\w'(-|\/)]*})

    if match
      match[0].delete('.')
    else
      ''
    end
  end

  def extract_variant(classname)
    classname.tr!('/', '_') if classname =~ %r{\/}

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

  def extract_chunk_code
    @chunk_code = if is_multi_variant_code
                    extract_multi_variants_code
                  else
                    extract_string_alias_code
                  end
  end

  def extract_multi_variants_code
    options = @lines.map do |line|
      classname = extract_classname(line)
      variant = extract_variant(classname)
      [variant, classname]
    end.compact

    TemplateReplacement.new('./templates/Chunk.txt').call(
      utility_name: @utility_name,
      chunk_name: @chunk_name,
      chunk_variants: options.map { |option| "  | #{option[0]}" }.join("\n"),
      chunk_to_js: options.map do |option|
        "  | #{option[0]} => \"#{option[1]}\""
      end.join("\n")
    )
  end

  def extract_string_alias_code
    TemplateReplacement.new('./templates/AliasChunk.txt').call(
      utility_name: @utility_name,
      chunk_name: @chunk_name,
      classname: extract_classname(@lines[0])
    )
  end

  def extract_utility_name
    @utility_name = @chunk_data_filename.match(/\w*\.txt/)[0].gsub('.txt', '')
  end

  def extract_chunk_name
    @chunk_name = utility_name.sub(utility_name[0], utility_name[0].downcase)
  end
end
