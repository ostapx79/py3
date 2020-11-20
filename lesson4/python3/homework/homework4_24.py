#!/usr/bin/python3
#: lesson4/python3/homework/homework4_24.py

numb_max = numb_min = numb_x = int(input("Введите число => "))

while numb_x != 0:
    if numb_x > numb_max:
        numb_max = numb_x
    elif numb_x < numb_min:
        numb_min = numb_x
    numb_x = int(input("Введите число => "))
print("numb_min =>", numb_min)
print("numb_max =>", numb_max)
