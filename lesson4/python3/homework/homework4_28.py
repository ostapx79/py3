#!/usr/bin/python3
#: lesson4/python3/homework/homework4_28.py
# Ряд чисел Фибоначчи задается следующим образом: первые два числа равны 1
# (F_1 = F_2 = 1), а каждое следующее равно сумму двух предыдущих:
# (F n = F n-1 + F n-2). Напишите программу, вводит натуральное число N и
# выводит на экран первые N чисел Фибоначчи.

fib_1 = fib_2 = 1

numb_f = int(input("Введите натуральное число => "))
print("fib_2 =>", fib_1)
print("fib_2 =>", fib_2)
numb_i = 0
while numb_i < numb_f-2:
    fib_sum = fib_2 + fib_1
    fib_1 = fib_2
    fib_2 = fib_sum
    print("fib_2 =>", fib_2)
    numb_i += 1

