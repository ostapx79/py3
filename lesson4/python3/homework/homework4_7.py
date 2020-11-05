#!/usr/bin/python3
# Напишите программу, которая вводит натуральное число N, и выводит на экран
# псевдослучайных чисел. И запустите ее несколько раз, обясните результат опыта.

import random

numb_rand = int(input("Введтите случаяное число => "))
numb_i = 1
while numb_i <= numb_rand:
    result = random.randrange(numb_i)
    print("Случайные числа =>", result)
    numb_i += 1

