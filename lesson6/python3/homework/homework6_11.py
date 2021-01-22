#!/usr/bin/python3
# lesson6/python3/homework/homework6_11.py


def perfect_number(numb):
    res_1 = 0
    res_2 = True
    for i in range(1, numb):
        if numb % i == 0:
            res_1 += i

        if numb == res_1:
            res_2 = True
        else:
            res_2 = False
    return res_2

numb_n = 28
result = perfect_number(numb_n)
if result:
    print("совершенное число ->", numb_n)
else:
    print("несовершенное число ->", numb_n)

