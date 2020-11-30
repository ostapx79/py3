#!/usr/bin/python3
#: lesson5/python3/lesson5_2.py
# процедуры с параметрами


def print_bin(numb_n):
    numb_k = 128
    while numb_k > 0:
        print(numb_n // numb_k, end='')
        numb_n %= numb_k
        numb_k //= 2


print_bin(99)
print()

