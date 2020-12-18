#!/usr/bin/python3
#: lesson6/python3/homework/homework6_1.py


def sum_value(first_value, second_value, third_value):
    if first_value > second_value and first_value > third_value:
        return first_value
    elif second_value > third_value and second_value > first_value:
        return second_value
    else:
        return third_value


numb_1, numb_2, numb_3 = (int(input("Введите число -> ")),
                          int(input("Введите число -> ")),
                          int(input("Введите число -> ")))
print("Максимальное значение ->", sum_value(numb_1, numb_2, numb_3))

