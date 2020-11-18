#!/usr/bin/python3
#: lesson4/python3/homework/homework4_23.py

numb_1 = int(input("Введите число => "))
flag = True
while flag:
    numb_2 = int(input("Введите число => "))
    numb_1 += numb_2
    if numb_2 == 0:
        flag = False
print("numb_1 =>",  numb_1)
