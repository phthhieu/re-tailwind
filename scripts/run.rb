require_relative './generator.rb'

Generator.new('./data/*.txt', '../src/TW.re').call
