#/usr/bin/python3


def friendly_number1(result1):
    i = 1
    res_s = 0
    while i < result1:
        if result1 % i == 0:
            res_s += i
        i += 1
    return res_s


def friendly_number2(result2):
    j = 1
    res_r = 0
    while j < result2:
        if result2 % j == 0:
            res_r += j
        j += 1
    return res_r


def friendly_numb3(result):
    for i in range(1, result+1):
        res_i = friendly_number1(i)
        for j in range(i):
            res_j = friendly_number2(j)

            if res_i == j and res_j == i:
                print('дружественный число!')
                print(res_i, res_j)


result = 1285
friendly_numb3(result)

