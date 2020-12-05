#!/usr/bin/python3
#: lesson5/pytnon3/homework/homework5_4a.py


def roman_symbol(numb_i):
    if 0 < numb_i < 4:
        for i in range (numb_i):
            print("I", end='')
        print()
    elif 5 < numb_i < 9:
        numb_i -= 5
        print("V", end='')
        for i in range(numb_i):
            print("I", end='')
        print()
    elif numb_i == 4:
        print("IV")
    elif numb_i == 5:
        print("V")
    elif numb_i == 9:
        print("IX")
    else:
        print("X")


numb_n = int(input("Введите число -> "))
roman_symbol(numb_n)

