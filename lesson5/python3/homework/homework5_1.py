#!/usr/bin/python3
#: lesson5/python3/homework/homework5_1.py
# Напишите процедуру, которая выводит на экран в столбик все цифры переданного
# ей числа, начиная с последней.

def numbers(numb):
    for numb_i in range(numb, 0, -1):
        print("-> ", numb_i)


numb_in = int(input("Введите натуральное число -> "))
numbers(numb_in)

