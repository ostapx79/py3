#!/usr/bin/python3
"""
: lesson5/python3/homework/homework5_7.py
"""


def takes_parameter(numb_n: int) -> int:
    for i in range(numb_n + 1):
        print("-", end='')


numb = int(input("Введите число -> "))
takes_parameter(numb)
print()

