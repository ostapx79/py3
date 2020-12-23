#!/usr/bin/python3
#: lesson6/python3/homework/homework6_4a.py


def greatest_common_factor(numb_1, numb_2):
    res1 = res2 = res3 = 0
    if numb_1 < numb_2 or numb_1 > numb_2:
        if numb_1 < numb_2:
            numb_total = numb_2
        else:
            numb_total = numb_1
        for count in range(1, numb_total):
            if numb_1 % count == 0 and numb_2 % count == 0:
                if res1 < count and res2 < count:
                    res1 = count
                    res2 = count
                    if res1 == res2:
                        res3 = count
    return res3


first_value = int(input("Введите число -> "))
second_value = int(input("Введите число -> "))
result = greatest_common_factor(first_value, second_value)
print("Greatest common factor ->", result)

