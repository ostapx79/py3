#!/usr/bin/python3
#: lesson6/python3/lesson6_2.py


def sum_digits(numb_n):
    sum_s = 0
    while numb_n != 0:
        sum_s += numb_n % 10
        numb_n //= 10
    return sum_s


numb_i = 12345
numb_x = 2 * sum_digits(numb_i + 5)
print(numb_x)

