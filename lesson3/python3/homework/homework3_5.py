#!/usr/bin/python3

months = int(input("Введите номер месяца => "))

print("Название времени года,", end=' ')
def switch_case(months):
    switcher = {
        1: 'зима.',
        2: 'зима.',
        3: 'весна.',
        4: 'весна.',
        5: 'весна.',
        6: 'лето.',
        7: 'лето.',
        8: 'лето.',
        9: 'осень.',
        10: 'осень.',
        11: 'осень.',
        12: 'зима.',
    }
    return print(switcher.get(months, "Такого числа месяца нет!"))

switch_case(months)
