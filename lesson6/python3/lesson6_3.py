#!/usr/bin/python3
#: lesson6/python3/lesson6_3.py


def sum_digits(numb_n):
    sum_numb = 0
    while numb_n != 0:
        sum_numb += numb_n % 10
        numb_n //= 10
    return sum_numb


numb = 12345
numb_sum = sum_digits(numb)
print(numb_sum)

numb_x = 54321
numb_y = 12345
numb_z = sum_digits(numb_x) + sum_digits(numb_y)
print(numb_z)

if sum_digits(numb) % 2 == 0:
    print("сумма цифр четная")
else:
    print("сумма цифр не четная")
