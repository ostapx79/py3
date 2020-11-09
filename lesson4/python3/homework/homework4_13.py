#!/usr/bin/python3
#: lesson4/python3/homework/homework4_13.py
# Напишите программу, считает количество четных цыфр введеного числа.

numb = int(input("Введите натуральное число => "))

for numb_i in range(1, numb + 1):
    if numb_i % 2 == 0:
        print("Четное натуральное число =>", numb_i)
    else:
        print("Нечетное натуральное число =>", numb_i)

print()
numb_j = 1
while numb_j <= numb:
    if numb_j % 2 == 0:
        print("Четное натуральное число =>", numb_j)
    else:
        print("Нечентое натуральное число =>", numb_j)
    numb_j += 1

