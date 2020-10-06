#!/usr/bin/python3

number = int(input())

if number <= 3:
    print('I' * number)
elif number == 4:
    print("IV")
elif 5 <= number <= 8:
    print('V' + 'I' * (number - 5))
elif number == 9:
    print('IX')
