#!/usr/bin/python3
# py3/lesson6/python3/homework/homework6_9a.py


def sum_digits(numb):
    res = 0
    while numb > 0:
        res += numb % 10
        numb //= 10
    return res


numb_n = 155
res = [i for i in range(numb_n + 1) if sum_digits(i) == sum_digits(i * 9)]
print(res)

