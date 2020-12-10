#!/usr/bin/python3
""" Упражнение 7.
Напишите процедуру, которая принимает числовой параметр - возраст человека в
годах, и выводит этот возраст со словом (21 - год, 22 - года, 25 - лет).
"""


def person_s_age(numb_n):
    if (numb_n == 1 or numb_n == 21 or numb_n == 31 or numb_n == 41 or
        numb_n == 51 or numb_n == 61 or numb_n == 71 or numb_n == 81 or
        numb_n == 91 or numb_n == 101):
        print(str(numb_n) + 'год!')
    elif (1 < numb_n < 5 or 21 < numb_n < 25 or 31 < numb_n < 35 or 
          41 < numb_n < 45 or 51 < numb_n < 55 or 61 < numb_n < 65 or
          71 < numb_n < 75 or 81 < numb_n < 85 or 91 < numb_n < 95):
        print(str(numb_n) + 'года!')
    else:
        if (4 < numb_n < 21 or 34 < numb_n < 41 or 44 < numb_n < 51 or
            54 < numb_n < 61 or 64 < numb_n < 71 or 74 < numb_n < 81 or
            84 < numb_n < 91 or 94 < numb_n < 101):
            print(str(numb_n) + "лет!")


name_age = int(input("Введите ваш возраст -> "))
person_s_age(name_age)

