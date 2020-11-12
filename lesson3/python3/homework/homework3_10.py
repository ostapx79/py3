#!/usr/bin/python3

coordinate_x = int(input("Введите координату X => "))
coordinate_y = int(input("Введите координату Y => "))

if coordinate_x > 0 and coordinate_y <= 1:
    print("Вы попали в плоскость.")
elif coordinate_x < 0 and coordinate_y <= 1:
    print("Вы попали в плоскость.")
elif coordinate_x > 0 and coordinate_y < 0:
    print("Вы попали в плоскость.")
elif coordinate_x < 0 and coordinate_y < 0:
    print("Вы попали в плоскость.")
else:
    print("Вы не попали в плоскость.")

