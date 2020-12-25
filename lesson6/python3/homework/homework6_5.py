#!/usr/bin/python3
#: lesson6/python3/homework/homework6_5.py
# Напишите функцию, которая (разворачивает) десятичную запись числа наоборот,
# например из 123 получается 321 или 43210 - 01234.


def expand_digits_number(numb_n):
    while numb_n > 0:
        res = numb_n % 10
        print(res, end='')
        numb_n //= 10
    # return res


numb = 543210 
result = expand_digits_number(numb)
result
print()

