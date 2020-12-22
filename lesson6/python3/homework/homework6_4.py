#!/usr/bin/python3
#: lesson6/python3/homework/homework6_4.py


def greatest_common_factor(numb_x, numb_y):
    numb_res = numb_x + numb_y
    count = 1
    res = 0
    while count <= numb_res:
        if numb_res % count == 0:
            if res < count:
                res = count
        count += 1
    return res


numb1 = int(input("Введите число -> "))
numb2 = int(input("Введите число -> "))

result = greatest_common_factor(numb1, numb2)
print('result ->', result)

