#!/usr/bin/python3
#: lesson4/python3/homework/homework4_18.py
# Используя сначала цикл с условием, а потом цикл с переменной. Напишите
# программу которая, выводит на экран четные степени числа 2 от 2^10 до 2^2 в
# порядке убывания.

numb_pow1 = 2 ** 10
numb_pow2 = 2 ** 2

while numb_pow1 >= numb_pow2:
    if numb_pow1 % 2 == 0:
        print("Четные числа =>", numb_pow1)
    else:
        print("Нечетные числа =>", numb_pow1)
    numb_pow1 -= 1

print()
numb_pow1 = 2 ** 10
numb_pow2 = 2 ** 2

for numb_i in range(numb_pow1, numb_pow2 - 1, -1):
    if numb_i % 2 == 0:
        print("Четные числа =>", numb_i)
    else:
        print("Нечнтные числа =>", numb_i)
