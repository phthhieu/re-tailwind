require_relative './template_replacement.rb'
require_relative './chunk_code_generator.rb'

class Generator
  def initialize(input_dir, output_file)
    @input_dir = input_dir
    @output_file = output_file
    @template_replacement = TemplateReplacement.new('./templates/Final.txt')
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

  def call
    chunks = Dir[@input_dir].map do |filename|
      chunk_generator = ChunkCodeGenerator.new(filename)
      chunk_generator.call
      [
        chunk_generator.utility_name,
        chunk_generator.chunk_name,
        chunk_generator.chunk_code,
        chunk_generator.is_multi_variant_code
      ]
    end

    code = @template_replacement.call(
      chunk_codes: chunks.map { |chunk| chunk[2] }.join("\n"),
      type_t: chunks.map { |chunk| chunk_to_t(chunk) }.join("\n"),
      t_to_js: chunks.map { |chunk| chunk_to_js(chunk) }.join("\n")
    )

    File.open(@output_file, 'w') { |file| file.puts code }
  end
end
