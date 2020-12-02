#!/usr/bin/python3
#: lesson5/python3/homework/homework5_2a.py


def divisors(numb_i):
    numb_r = numb_i
    while numb_i > 0:
        if numb_r % numb_i == 0:
            print("divisors ->", numb_i, end=' ')
        numb_i -= 1


numb_n = int(input("Введите число -> "))
divisors(numb_n)
print()

