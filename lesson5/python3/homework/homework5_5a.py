#!/usr/bin/python3
#: lesson5/python3/homework/homework5_5a.py


numb_i = int(input("Введите число -> "))

numb_res = ''
while numb_i:
    numb_res = str(numb_i % 8) + numb_res
    numb_i //= 8

print(numb_res)

