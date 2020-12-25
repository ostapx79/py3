#!/usr/bin/python3
#: lesson6/python3/homework/homework6_7.py
# Напишите функции, которая вычисляет факториал натурального числа N.

def factorial(numb_n):
    res = 1
    for i in range(1, numb_n + 1):
        res *= i
    return res

numb = 5
result = factorial(numb)
print(result)

