#!/usr/bin/env ruby
def match_expression(argument)
  regex = /School/  # Regular expression to match "School"
  if argument.match?(regex)
    puts "The argument '#{argument}' matches the regular expression."
  else
    puts "The argument '#{argument}' does not match the regular expression."
  end
end
