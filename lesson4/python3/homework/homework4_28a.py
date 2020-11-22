#!/usr/bin/python3
#: lesson4/python3/homework/homework4_28a.py

fib1 = fib2 = 1
n_fib = int(input("Введите натуральное число => "))

print("fib =>", fib1)
print("fib =>", fib2)

for i in range(2, n_fib):
    fib1, fib2 = fib2, fib2 + fib1
    print("fib =>", fib2)

