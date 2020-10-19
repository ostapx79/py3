#!/usr/bin/python3
import math

coordinate_x1 = int(input("Введите координата x1 - "))
coordinate_x2 = int(input("Введите координата x2 - "))
coordinate_y1 = int(input("Введите координата y1 - "))
coordinate_y2 = int(input("Ввудите координата y2 - "))

distance = math.sqrt(
    (coordinate_x2 - coordinate_x1) ** 2 + (coordinate_y2 - coordinate_y1) ** 2
)

print(
    "Растояние коордионаты между двух точек на чесловой оси - ", int(distance)
)
