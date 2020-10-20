#!/usr/bin/python3
import math
# Округляем вещественное число до билжайшего целого. В Python3 для округления
# вещественный чисел определеные функции как (int, round), и есть еще и
# библиотека в котором содержет функций которые работает что-бы округлить
# вещественные числа как (floor, ceil, round). При этом надо импортировать
# библеотеку (math).

float_value = float(input("Введите вещественное число => "))

int_value = int(float_value)
print("Отсикает дробную часть =>", int_value)

int_value2 = round(float_value)
print("Ближайшее целое число =>", int_value2)

int_value3 = math.floor(float_value)
print("Ближайшее целое к меньшиму =>", int_value3)

int_value4 = math.ceil(float_value)
print("Ближайшее целое к большиму =>", int_value4)
