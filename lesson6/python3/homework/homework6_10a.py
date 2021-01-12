#!/usr/bin/python3


def friendly_number(result1, result2):
    i = 0
    res_s = 0
    while i <= result1:
        if result1 % i == 0:
            res_s += i
        i += 1

    j = 0
    res_r = 0
    while j <= result2:
        if result2 % j == 0:
            res_r += j
        j += 1

    if res_s == result2 and res_r == result1:
        return 'дружественный число!'
    else:
        return 'не дружественные число'


# result1 = 220
result = 285

for i in range(result):
    for j in range(i):
        res = friendly_number(i, j)
        print(res)

