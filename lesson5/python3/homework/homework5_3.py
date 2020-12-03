#!/usr/bin/python3
#: lesson5/python3/homework/homework5_3.py


def numb_res(numb):
    numb_i = 1
    while numb_i <= numb:
        print("numb res ->", numb_i)
        numb_i += 1


numb_x = int(input("Введите число -> "))
numb_res(numb_x)

