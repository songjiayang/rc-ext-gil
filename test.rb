# test.rb
require_relative 'ext/block_ext'

a = Thread.new { BlockExt.run }
b = Thread.new { puts "bbb" }

sleep
