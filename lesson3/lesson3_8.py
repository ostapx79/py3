#!/usr/bin/python3

number = int(input()) # 1 - 99

number_l = number // 10
if 0 < number_l <= 3:
    print('X' * number_l, end='')
elif number_l == 4:
    print('XL', end='')
elif 5 <= number_l <= 8:
    print('L' + 'X' * (number_l - 5), end='')
elif number_l == 9:
    print('XC', end='')
number = number % 10

if number <= 3:
    print('I' * number)
elif number == 4:
    print('IV')
elif 5 <= number <= 8:
    print('V' + 'I' * (number - 5))
elif number == 9:
    print("IX")
