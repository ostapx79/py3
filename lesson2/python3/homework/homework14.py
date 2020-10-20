#!/usr/bin/python3

import random

# Напишите программу, которая вводит два целых числа, a и b (a < b), и
# выводит на экран 5 случаных целых чисел на отрезке [a, b].

first_numb = int(input("Введите первое целое число => "))
second_numb = int(input("Введите второе целое число => "))

print(random.randint(first_numb, second_numb))
print(random.randint(first_numb, second_numb))
print(random.randint(first_numb, second_numb))
print(random.randint(first_numb, second_numb))
print(random.randint(first_numb, second_numb))
