#!/usr/bin/python3
#: lesson5/python3/homework/homework5_12.py


def prime_number(numb_p):
    numb_k = 2
    while numb_p % numb_k != 0:
        numb_k += 1
    if numb_k == numb_p:
        print("prime")
    else:
        print("no prime")


numb = int(input("Введите число -> "))
prime_number(numb)

