#!/usr/bin/python3
# Описание к этому файлу на ходится в homework17.c.
import random

first_float_numb = float(input("Введите первое вещественое число => "))
second_float_numb = float(input("Введите второе вещественое число => "))

print(
    "Первое случайное вещественное число =>",
    random.uniform(first_float_numb, second_float_numb)
)
print(
    "Второе случайное вещественное число =>",
    random.uniform(first_float_numb, second_float_numb)
)
print(
    "Третие случайное вещественное число =>",
    random.uniform(first_float_numb, second_float_numb)
)
print(
    "Четвертый случайное вещественное число =>",
    random.uniform(first_float_numb, second_float_numb)
)
print(
    "Пятое случайное вещественное число =>",
    random.uniform(first_float_numb, second_float_numb)
)
