# D&D DICE!
# William Gaston
# 9/17/2018
###########################################################
print "D&D DICE
BY WILLIAM GASTON
"
repeat = 'y'
until repeat == 'n'
  print 'Enter dice code:
'
  input = gets.chomp
  input_value = input.split('d')
  quantity = input_value[0].to_i
  sides = input_value[1].to_i
  final_value = 0
  reps = 1
  until quantity == 0
    roll = rand(1..sides)
    print 'Roll '
    print reps
    print ': '
    print roll
    print '
'
    final_value += roll
    quantity -= 1
    reps += 1
  end
  print 'Dice value: '
  print final_value
  got = 'x'
  until got == 'y' || got == 'n'
    print '
Roll again? (y/n)
'
    got = gets.chomp
    if got != 'y' && got != 'n'
      print 'Invalid input. Please enter "y" or "n"'
    end
  end
end
