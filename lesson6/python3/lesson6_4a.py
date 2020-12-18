#!/usr/bin/python3
#: lesson6/python3/lesson6_4a.py


def is_prime(numb_n):
    numb_k = 2
    while numb_k * numb_k <= numb_n and numb_n % numb_k != 0:
        numb_k += 1
    return numb_k * numb_k > numb_n


numb = int(input("Введите число -> "))
while is_prime(numb):
    print("простое число")
    numb = int(input("Введите число -> "))

