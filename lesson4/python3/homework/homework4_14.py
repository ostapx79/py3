#!/usr/bin/python3
#: lesson4/python3/homework/homework4_14.py

numb = int(input("Введите натуральное число => "))

numb_i = 1
numb_j = 0
while numb_i <= numb:
    numb_j += numb_i
    print("numb_i =>", numb_i, "numb_j =>", numb_j)
    numb_i += 1
print("Сумма введеного числа =>", numb_j)
print()
numb_k = 0
for numb_h in range(1, numb + 1):
    numb_k += numb_h
    print("numb_h =>", numb_h, "numb_k =>", numb_k)
print("Сумма введеного числа =>", numb_k)
