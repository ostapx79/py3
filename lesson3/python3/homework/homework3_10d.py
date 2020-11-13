#!/usr/bin/python3
#: lesson3/python3/homework/homework3_10d.py

x = float(input("Введите перевое координата => "))
y = float(input("Введите второе координата => "))

if ((x + 1) * (x + 1) + y*y / 2 >= 1 and
   (x - 1) * (x - 1) + y*y / 2 <= 1 and x >= 0):
    print("попали.")
else:
    print("непопали.")

