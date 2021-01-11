#!/usr/bin/python3
#: py3/lesson6/python3/homework/homework6_9.py
# Напишите функцию, которая вводите натуральное число N и находит все числа в
# диапазоне [0, N], сумма цифр которая не меняется при умножении на 2, 3, 4, 5,
# 6, 7, 8, и 9 (например, число 9). Используйте функцию для вычисление суммы
# цифр числа.


def sum_digits(numb):
    res = 1
    i = 0
    while i <= numb:
        res += i
        i += 1
    return res


def numb_same(numb_i):
    for i in range(numb_i + 1):
        if sum_digits(i) == sum_digits(i * 5):
            same = sum_digits(i)
    return same


numb_n = 155
result = numb_same(numb_n)
print(result)

