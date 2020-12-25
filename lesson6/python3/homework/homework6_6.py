#!/usr/bin/python3
#: lesson6/python3/homework/homework6_6.py
import random

def pseudo_random_numb(first_numb, second_numb):
    first_numb = random.randrange(1, 7)
    second_numb = random.randrange(1, 7)
    result = first_numb + second_numb
    return result


first_shot = 0
second_throw = 0
print(pseudo_random_numb(first_shot, second_throw))

