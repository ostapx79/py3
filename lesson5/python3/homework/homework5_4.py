#!/usr/bin/python3
#: lesson5/python3/homework/homework5_4.py

def roman_numerals(numb_i):
    if 0 < numb_i < 4:
        roman_symbol = "I"
        if numb_i == 1:
            print(roman_symbol)
        elif numb_i == 2:
            print(roman_symbol * 2)
        else:
            print(roman_symbol * 3)


numb_n = int(input("Введите число -> "))
roman_numerals(numb_n)

