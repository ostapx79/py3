#!/usr/bin/python3
#: py3/lesson6/homework/homework6_8.py
# Напишите функцию, которая вычисляет N-ое число Фибоначчи.


def fibonacci_numb(numb):
    """Возвращает число Фибоначчи"""

    fib_1 = 0
    fib_2 = 1

    if numb == 0:
        return 0
    if numb == 1 or numb == 2:
        return 1

    for i in range(numb):
        fib_1 = fib_2 + fib_1
        fib_2 = fib_1 - fib_2

    return fib_1


fib_numb = int(input("Введите число - "))

result_fib = fibonacci_numb(fib_numb)
print(result_fib)

