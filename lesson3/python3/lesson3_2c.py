#!/usr/bin/python3

first_numb = int(input("Введите первое целое число => "))
second_numb = int(input("Введите второе целое число => "))

max_numb = first_numb
if second_numb > first_numb:
    max_numb = second_numb

print("Максимальное целое число из двух чисел =>", max_numb)

