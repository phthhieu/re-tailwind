class TemplateReplacement
  def initialize(template_file)
    @template_content = File.read(template_file)
  end

  def call(options)
    options.each do |k, v|
      k_as_string = k.to_s
      @template_content.gsub!("{{#{k_as_string}}}", v)
    end
    @template_content
  end
end
