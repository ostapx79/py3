#!/usr/bin/python3
#: lesson5/python3/lesson5_1.py
# просто процедура

def error():
    print("ОШИБКА! Число меньше чем ноль!")


def correct_answer():
    print("ПРАВИЛЬНО! Число больше чем ноль!")
    

value_numb = int(input("Введите натуральное число больше чем ноль => "))

if value_numb < 0:
    error()
else:
    correct_answer()

