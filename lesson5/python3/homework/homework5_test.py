#!/usr/bin/python3


def roman_numerals(numb_i):
    roman_symbol = 'I'
    roman_v = 'V'
    if 0 < numb_i < 4:
        for numb_j in range(numb_i+1):
            roman_symbol
        print(roman_symbol * numb_j)
    elif numb_i == 4:
        print(roman_symbol + roman_v)
    elif 4 < numb_i < 9:
        if numb_i == 5:
            print(roman_v)
        elif numb_i > 5:
            numb_i -= 5
            numb_res = roman_symbol * numb_i
            print(roman_v + numb_res)

            
numb_n = int(input("Введите число -> "))
roman_numerals(numb_n)
