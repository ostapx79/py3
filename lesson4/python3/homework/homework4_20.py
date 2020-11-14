#!/usr/bin/python3
#: lesson4/python3/homework/homework4_20.py

numb_a = 50
numb_b = 180

while numb_a != numb_b:
    if numb_a > numb_b:
        numb_a -= numb_b
        print("numb_a =>", numb_a)
    else:
        numb_b -= numb_a
        print("numb_b =>", numb_b)
print("numb_a =>", numb_a)

