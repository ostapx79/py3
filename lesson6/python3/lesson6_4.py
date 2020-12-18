#!/usr/bin/python3
#: lesson6/python3/lesson6_4.py
# Логические функции.


def is_prime(numb_n):
    numb_k = 2
    while numb_k * numb_k <= numb_n and numb_n % numb_k != 0:
        numb_k += 1
    return numb_k * numb_k > numb_n


numb = int(input("введите число -> "))
if is_prime(numb):
    print("простое число")
else:
    print("не простое число")

