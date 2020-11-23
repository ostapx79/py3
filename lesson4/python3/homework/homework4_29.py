#!/usr/bin/python3
#: lesson4/python3/homework/homework4_29.py
# Напишите программу, которая вводит числа a и b и выводи все простые числа в
# диапазоне a и b.

#print("Программа выводит все простые числа в диапазоне a and b!")
#a = int(input("Введите первое натуральное число => "))
#b = int(input("Введите второе натуральное число => "))
a = 50
#b = 100
n = 2
while n < a:
    k = 2
    if k * k <= n and n % k != 0:
        print("prime", n)
        #print(a)
        #if k != 0: 
        #    print("простое", k)
        #else:
        #    print("составное", a)
        #a += k
        k += 1
    n += 1
