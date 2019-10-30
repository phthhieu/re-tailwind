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

    parts = classname.split('-')

    case true
    when has_minus
      parts.unshift('Minus')
    when starting_with_number
      num_part = parts.shift
      parts.push(num_part)
    end

    parts.map(&:capitalize).join('')
  end

  def extract_chunk_code
    @chunk_code = if is_multi_variant_code
                    extract_multi_variants_code
                  else
                    extract_string_alias_code
                  end
  end

  PSEUDO_CLASS = {
    hover: %w[
      BackgroundColor
      BorderColor
      BoxShadow
      FontWeight
      Opacity
      TextColor
      TextDecoration
    ],
    focus: %w[
      BackgroundColor
      BorderColor
      BoxShadow
      FontWeight
      Opacity
      Outline
      TextColor
      TextDecoration
    ]
  }.freeze

  def create_options(classname, variant)
    variant_matchings = ["| #{variant}"]
    variant_to_classnames = ["| #{variant} => \"#{classname}\""]
    PSEUDO_CLASS.each do |k, v|
      if v.include?(@utility_name)
        pseudo_variant = "#{k.to_s.capitalize}#{variant}"
        pseudo_classname = "#{k}:#{classname}"
        variant_matchings << "| #{pseudo_variant}"
        variant_to_classnames << "| #{pseudo_variant} => \"#{pseudo_classname}\""
      end
    end
    [variant_matchings, variant_to_classnames]
  end

  def extract_multi_variants_code
    chunk_variants = []
    chunk_to_js = []

    @lines.each do |line|
      classname = extract_classname(line)
      variant = extract_variant(classname)
      new_options = create_options(classname, variant)
      chunk_variants.concat(new_options[0])
      chunk_to_js.concat(new_options[1])
    end

    TemplateReplacement.new('./templates/Chunk.txt').call(
      utility_name: @utility_name,
      chunk_name: @chunk_name,
      chunk_variants: chunk_variants.join("\n"),
      chunk_to_js: chunk_to_js.join("\n")
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
    matched_filename = @chunk_data_filename.match(/\w*\.txt/)[0]
    @utility_name = matched_filename.gsub('.txt', '')
  end

  def extract_chunk_name
    @chunk_name = capitalize_first_letter(utility_name)
  end

  def capitalize_first_letter(str)
    str.sub(utility_name[0], str[0].downcase)
  end
end
