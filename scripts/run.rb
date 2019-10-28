require_relative './tw_generator.rb'

TwGenerator.new('./data/*.txt', '../src/TW.re').call
