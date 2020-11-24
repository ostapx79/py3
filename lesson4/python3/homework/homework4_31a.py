#!/usr/bin/python3
#: lesson4/python3/homework/homework4_30a.py

for numb_i in range(2, 1000):
    numb_s = 0
    numb_j = 1
    while numb_j < numb_i:
        if numb_i % numb_j == 0:
            numb_s += numb_j
        numb_j += 1
    if numb_s == numb_i:
        print("is prime =>", numb_i)
