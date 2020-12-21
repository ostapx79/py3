#!/usr/bin/python3
#: lesson6/python3/homework/homework6_3.py


def amount_digits_number(numb_n):
    count = 0 
    res = 1
    while count < numb_n:
        if numb_n != 0:
            numb_n //= 10
            res += 1
        count += 1
    return res


numb = int(input("Введите число -> "))
print('number of digits a of number ->', amount_digits_number(numb))

