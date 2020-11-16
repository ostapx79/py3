#!/usr/bin/python3
#: lesson4/python3/homework/homework4_15.py
# Напишите программу, которая определяет, верно ли, что введенное число содержит
# две одинаковые цифры, стоящие рядом (221 или 122).

entered_numb = int(input("Введите натуральное число => "))

# numb_i = 0
if entered_numb > 0 and entered_numb < 100:
    result1 = entered_numb % 10
    result2 = entered_numb // 10 % 10
    if result1 == result2:
        print("Оба числа одинаковы.")
    else:
        print("Числа не одинаковы.")
elif entered_numb > 100 and entered_numb < 1000:
    result1 = entered_numb // 10 % 10
    result2 = entered_numb // 100
    if result1 == result2:
        print("Первые числа совпадают друг с другом.")
    else:
        print("Первые числа не совпадают друг с другом.")
else:
    result1 = entered_numb // 100 % 10
    result2 = entered_numb // 1000
    if result1 == result2:
        print("Первые числа совпадают друг с другом.")
    else:
        print("Первые числа не совпадают друг с другом.")

