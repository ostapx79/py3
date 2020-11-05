#!/usr/bin/python3

print("Введите натуральные числа!")
numb_a = int(input("Введите первое число => "))
numb_b = int(input("Введтие второе число => "))
result_sum = 0

if numb_a < numb_b:
    while numb_a <= numb_b:
        result_sum += numb_a * numb_a
        numb_a += 1
    print("Сумма квадратных чисел =>", result_sum)
else:
    while numb_a >= numb_b:
        result_sum += numb_a * numb_a
        numb_a -= 1
    print("Сумма квадратных чисел =>", result_sum)
