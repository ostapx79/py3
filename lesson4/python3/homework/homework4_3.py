#!/usr/bin/python3

numb = int(input("Введите натуральное число => "))
numb_u = 0

numb_i = 1
while numb_i <= numb:
    numb_u += numb_i
    numb_i += 1
print("Сумма натурального числа =>", numb_u)

