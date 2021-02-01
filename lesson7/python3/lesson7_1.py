#!/usr/bin/python3
# Ханойские башни на Python-3


def hanoi(numb_n, numb_k, numb_m):
    if numb_n == 0: return

    numb_p = 6 - numb_k - numb_m
    hanoi(numb_n - 1, numb_k, numb_p)
    print(str(numb_k) + " -> " + str(numb_m))
    hanoi(numb_n - 1, numb_p, numb_m)


hanoi(4, 1, 3)

