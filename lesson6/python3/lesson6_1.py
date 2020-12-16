#!/usr/bin/python3
#: lesson6/python3/lesson6_1.py


def sum_digits(numb_n):
    summ = 0
    while numb_n != 0:
        summ += numb_n % 10
        numb_n //= 10
    return summ


print(sum_digits(12345))

