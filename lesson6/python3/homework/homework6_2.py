#!/usr/bin/python3
#: lesson6/python3/homework/homework6_2.py


def expert_assessment(numb_n):
    numb_r = numb_n
    count1 = 1
    while count1 != 5:
        numb_n = int(input("Число эксперта -> "))
        numb_r += numb_n
        count1 += 1
    return numb_r


numb = int(input("Число эксперта -> "))
result = expert_assessment(numb)
print("Набранные очки спортсмена ->", result)

