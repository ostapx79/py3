#!/usr/bin/python3
#: lesson3/python3/homework/homework3_10c.py

x = float(input("Введите первую координату => "))
y = float(input("Введите вторую координату => "))

if x <= 0 and y <= 0 and y <= -x:
    print("попали.")
else:
    print("непопали.")

