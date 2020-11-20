#!/usr/bin/python3
#: lesson4/python3/homework/homework4_25a.py

numb = int(input("Введите натуральное число => "))

fact = 1
for i in range(1, numb+1):
    fact *= i
print("factorial =>", fact)

