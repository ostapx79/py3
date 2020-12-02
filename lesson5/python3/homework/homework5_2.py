#!/usr/bin/python3
#: lesson5/python3/homework/homework5_2.py


def divisors(numb_n):
    numb_r = numb_n
    for numb_d in range(numb_n, 0, -1):
        if numb_r % numb_d == 0:
            print("divisors ->", numb_d, end=' ')


numb_i = int(input("Введите число -> "))
divisors(numb_i)
print()

