#!/usr/bin/python3

import random

numb_rand = int(input("Введите число => "))
# result = 0.0

numb_i = 0
while numb_i <= numb_rand:
    result = random.uniform(0.0, 1.0)
    print("Псевдослучаное число от 0 до 1 =>", result)
    numb_i += 1
