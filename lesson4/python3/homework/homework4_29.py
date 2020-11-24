#!/usr/bin/python3
#: lesson4/python3/homework/homework4_29.py
# Напишите программу, которая вводит числа a и b и выводи все простые числа в
# диапазоне a и b.

print("Программа выводит все простые числа в диапазоне a and n!")
n = int(input("Введите число => "))
a = int(input("Введите число => "))
print()
if n == 1:
    n += 1

while n < a:
    k = 2
    while n % k != 0:
        k += 1
    print()
    print(k)
    print()
    if k == n:
        print("Простые числа =>", n)
    n += 1

