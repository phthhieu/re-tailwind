require_relative './template_replacement.rb'
require_relative './chunk_code_generator.rb'

class TwGenerator
  def initialize(input_dir, output_file)
    @input_dir = input_dir
    @output_file = output_file
    @template_replacement = TemplateReplacement.new('./templates/Final.txt')
  end

  def chunk_to_js(utility_name, chunk_name, is_multi_variant_code)
    if is_multi_variant_code
      "  | #{utility_name}(v) => #{chunk_name}ToJs(v)"
    else
      "  | #{utility_name} => #{chunk_name}ToJs()"
    end
  end

  def chunk_to_t(utility_name, chunk_name, is_multi_variant_code)
    if is_multi_variant_code
      "| #{utility_name}(#{chunk_name})"
    else
      "| #{utility_name}"
    end
  end

  def call
    chunk_codes = []
    type_t = []
    t_to_js = []

    Dir[@input_dir].each do |filename|
      chunk_generator = ChunkCodeGenerator.new(filename)
      chunk_generator.call
      chunk_codes << chunk_generator.chunk_code
      type_t << chunk_to_t(
        chunk_generator.utility_name,
        chunk_generator.chunk_name,
        chunk_generator.is_multi_variant_code
      )
      t_to_js << chunk_to_js(
        chunk_generator.utility_name,
        chunk_generator.chunk_name,
        chunk_generator.is_multi_variant_code
      )
    end

    code = @template_replacement.call(
      chunk_codes: chunk_codes.join("\n"),
      type_t: type_t.join("\n"),
      t_to_js: t_to_js.join("\n")
    )

    File.open(@output_file, 'w') { |file| file.puts code }
  end
end
