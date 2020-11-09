#!/usr/bin/python3
#: lesson4/python3/homework/homework4_12.py

numb = int(input("Введите натуральное число => "))

numb_i = 1
while numb_i < numb:
    numb_pow = numb_i ** 2
    if numb_pow % (10 ** 1) == numb_i:
        print("Натуральное число в первой степень =>", numb_i)
    elif numb_pow % (10 ** 2) == numb_i:
        print("Натуральное число в второй степень =>", numb_i)
    elif numb_pow % (10 ** 3) == numb_i:
        print("Натуральное число в третей степень =>", numb_i)
    elif numb_pow % (10 ** 4) == numb_i:
        print("Натуральное число в четвертой степень =>", numb_i)
    elif numb_pow % (10 ** 5) == numb_i:
        print("Натуральное число в пятой степень =>", numb_i)
    elif numb_pow % (10 ** 6) == numb_i:
        print('Натуральное число в шестой степень =>', numb_i)
    elif numb_pow % (10 ** 7) == numb_i:
        print("Натуральное число в седьмой степень =>", numb_i)
    elif numb_pow % (10 ** 8) == numb_i:
        print("Натуральное число в восьмой степень =>", numb_i)
    elif numb_pow % (10 ** 9) == numb_i:
        print("Натуральное число в девятой степень =>", numb_i)
    else:
        if numb_pow % (10 ** 10) == numb_i:
            print("Натуральное число в десятой степень =>", numb_i)
    numb_i += 1

