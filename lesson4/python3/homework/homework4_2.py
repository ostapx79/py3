#!/usr/bin/python3
# Напишите прокрамму, которая вводит два целых числа, и находит их произведение,
# не используя операток умножения. Учтите, что числа могут быть отрицательными.

value_a = int(input("Введите первое значение => "))
value_b = int(input("Введите второе значение => "))
value_c = 0

if abs(value_a) > abs(value_b):
    tmp = value_a
    value_a = value_b
    value_b = tmp
for value_i in range(0, abs(value_a)):
    if (value_a >= 0 and value_b >= 0) or (value_a < 0 and value_b < 0):
        value_c += abs(value_b)
    else:
        value_c -= abs(value_b)
print("Произведение двух чисел =>", value_c)
