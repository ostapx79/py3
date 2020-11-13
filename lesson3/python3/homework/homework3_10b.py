#!/usr/bin/python3
#: lesson3/python3/homework/homework3_10b.py
# д/з упражнение 10_b

coordinate_x = int(input("Введите координата X => "))
coordinate_y = int(input("Введите координата Y => "))

D = coordinate_y + coordinate_x
r = D / 2

if r < 1 and r > -1:
    print("попали в круг")
else:
    print("не попали")
