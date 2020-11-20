#!/usr/bin/python3
#: lesson4/python3/homework/homework4_25.py

numb = int(input("Введите натуральное число => "))

fact = 1
i = 1
while i <= numb:
    fact *= i
    i += 1
print("factorial =>", fact)
