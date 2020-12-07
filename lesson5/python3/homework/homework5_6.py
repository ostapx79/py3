#!/usr/bin/python3
#: lesson5/python3/homework/homework5_6.py


def number_hex(numb_hex):
    numb_h = hex(numb_hex)
    numb_i = numb_h.replace('x', '0')
    print(numb_i)


numb_n = int(input("Введите число -> "))
number_hex(numb_n)

