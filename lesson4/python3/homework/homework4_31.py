#!/usr/bin/python3
#: lesson4/python3/homework/homework4_31.py
# Напишите программу, которая вводит натуральное число N и находит все
# совершенные числа в диапазоне от 1 до N.

for numb_i in range(2, 50000):
    numb_s = 0
    for numb_j in range(1, numb_i):
        if numb_i % numb_j == 0:
            numb_s += numb_j
    if numb_s == numb_i:
        print("совершенное число =>", numb_i)

