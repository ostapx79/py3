#!/usr/bin/python3
#: lesson5/python3/homework/homework5_8.py


def square_of_stars(numb_n):
    for i in range(numb_n):
        for j in range(numb_n):
            print("* ", end='')
        print()


numb_stars = int(input("Введите число -> "))
square_of_stars(numb_stars)

