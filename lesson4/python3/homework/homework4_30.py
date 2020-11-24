#!/usr/bin/python3
#: lesson4/python3/homework/homework4_30.py

numb_j = int(input("Введите число чтоб узнать совершенно ли оно => "))
numb_s = 0
for numb_i in range(1, numb_j):
    if numb_j % numb_i == 0:
        numb_s += numb_i
if numb_s == numb_j:
    print("Совершенное число =>", numb_j)
else:
    print("Не совершенное число =>", numb_j)

