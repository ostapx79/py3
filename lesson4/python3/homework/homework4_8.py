#!/usr/bin/python3

import random

numb_rand = int(input("Введите число => "))
# result = 0.0

numb_i = 0
while numb_i < numb_rand:
    result = random.uniform(0, 1)
    print("Псевдослучаное число от 0 до 1 =>", "{: .2f}".format(result))
    numb_i += 1
