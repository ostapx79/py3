#!/usr/bin/python3
#: lesson3/python3/homework/homework3_10b.py
# д/з упражнение 10_b

x = float(input("Введите координата X => "))
y = float(input("Введите координата Y => "))

if x * x + y * y / 2 < 1 and x*x + y*y / 2 > -1:
    print("попали в круг")
else:
    print("не попали")
