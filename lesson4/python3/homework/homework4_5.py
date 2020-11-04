#!/usr/bin/python3

# Напишене программу, которая вводит натуральные числа a и b, и выводи
# натуральные числа в инетрвале от a до b. Например если ввести 4 и 5 программа
# должна вывести 4 * 4 = 16, 5 * 5 = 25 и т.д..

print("Введите натуральные числа!")
numb_1 = int(input("Первое число => "))
numb_2 = int(input("Второе число => "))
result = 0

if numb_1 < numb_2:
    while numb_1 <= numb_2:
        result = numb_1 * numb_1
        print("result =>", str(numb_1) + " * " + str(numb_1) + " = " + 
              str(result))
        numb_1 += 1
else:
    while numb_1 >= numb_2:
        result = numb_1 * numb_1
        print("result =>", str(numb_1) + " * " + str(numb_1) + " = " +
              str(result))
        numb_1 -= 1

