#!/usr/bin/python3
# гиперпростые числа


def is_prime(numb):
    d = 2
    while d * d <= numb and numb % d != 0:
        d += 1
    if numb == 0 or numb == 1:
        return False
    else:
        return d * d > numb


def hyper_simple(numb_i):
    i = 2
    res = 0 
    res_1 = 0
    while numb_i > i:
        res = is_prime(numb_i % 10)
        if res != 0:
            res_1 += res
        numb_i //= 10
    return res_1


numb_t = 500

for i in range(numb_t):
    result = hyper_simple(i)
    if result == 3:
        print(i)


