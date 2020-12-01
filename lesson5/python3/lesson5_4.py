#!/usr/bin/python3
# Процедуры с изменяемыми параметрами.


def swaps(numb_a, numb_b):
    numb_c = numb_a
    numb_a = numb_b
    numb_b = numb_c
    print(numb_a, numb_b)


numb_x = int(input("Введите натуральное число -> "))
numb_y = int(input("Введите натуральное число -> "))

swaps(numb_x, numb_y)

