#!/usr/bin/python3
#: lesson5/python3/homework/homework5_5.py
# Напишите программу, которая выводит на экран запись числа, меньшего чем 8^10,
# в виде 10 знаков в восьмеричной системе счисления.

numb_n = int(input("Введите число -> "))
numb_base = int(input("Выберите систему счисления (от 2 до 9) -> "))
if not(2 <= numb_base <= 9):
    quit()

numb_res = ''

while numb_n:
    numb_res = str(numb_n % numb_base) + numb_res
    numb_n //= numb_base

print(numb_res)

