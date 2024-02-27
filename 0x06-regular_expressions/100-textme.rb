#!/usr/bin/env ruby
f match_data
      sender = match_data[:sender].strip
      receiver = match_data[:receiver].strip
      flags = match_data[:flags].strip
      transactions << [sender, receiver, flags]
    end
