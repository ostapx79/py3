#!/usr/bin/python3

numb = int(input("Введтие натуральное число => "))
numb_u = 0

for numb_i in range(1, numb+1):
    numb_u += numb_i
print("Сумма натурального числа =>", numb_u)

