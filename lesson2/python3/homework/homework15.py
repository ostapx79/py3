#!/usr/bin/python3
import random

# На заметку, надо менять имена переменых, они не подходят.!!!!!

# Нпишите програму, которая моделирует бросания двух кубиков: при запуске
# выводит случайное число в диапазоне от 2 до 12.

first_die_value = 2
value_of_the_second_die = 12
value_of_two_dice = random.randint(first_die_value, value_of_the_second_die)
print("Результат после бросание двух кубиков =>", value_of_two_dice)

