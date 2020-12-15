#!/usr/bin/python3
#: lesson5/python3/homework/homework5_11.py
# Напишете процедуру, которая принимает параметр - натуральное число N - и
# выводит первые числа Фибоначчи.


def fibonacci_number(fib_numb):
    fib_1 = 0
    fib_2 = 1
    i = 0
    while i <= fib_numb:
        print("first numb fib ->", fib_1)
        print("second numb fib ->", fib_2)
        fib_res = fib_2 + fib_1
        print("result numb fib ->", fib_res)
        print()
        fib_1 = fib_2
        fib_2 = fib_res
        i += 1
    print("result numb fib ->", fib_res)


numb_start = int(input("Введите число -> "))
print()
fibonacci_number(numb_start)

