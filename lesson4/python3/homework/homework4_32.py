#!/usr/bin/python3
#: lesson4/python3/homework/homework4_32.py
# В магазине продается мастика в ящиках по 15, 17, 21кг. Как купить ровное 185кг
# мастике не скрывая другие ящики? Сколько способами можно это сделать?

numb15 = 15
numb17 = 17
numb21 = 21
count1 = 0
for numb_15i in range(1, 11):
    numb_15i *= numb15
    # print("numb15 =>", numb_15i)
    numb_result_15 = numb_15i + numb17
    numb_result1_15 = numb_15i + numb17 + numb21
    if numb_result_15 == 185:
        print("numb_result =>", numb_result_15)
        count1 += 1
    elif numb_result1_15 == 185:
        print("numb_result =>", numb_result1_15)
        count1 += 1
    for numb_17j in range(11, 0, -1):
        numb_17j *= numb17
        numb_result2_15 = numb_15i + numb17 + numb_17j
        numb_result3_15 = numb_15i + numb17 + numb_17j + numb21
        print("numb_result3_15 =>", numb_result3_15)
        if numb_result2_15 == 185:
            print("numb_result =>", numb_result2_15)
            count1 += 1
        elif numb_result3_15 == 185:
            print("numb_result =>", numb_result3_15)
            count1 += 1

for numb_17i in range(1, 11):
    numb_17i *= numb17
    print("numb17 =>", numb_17i)
    numb_result_17 = numb_17i + numb15
    numb_result1_17 = numb_17i + numb15 + numb21
    if numb_result_17 == 185:
        print("numb_result =>", numb_result_17)
        count1 += 1
    elif numb_result1_17 == 185:
        print("numb_result =>", numb_result1_17)
        count1 += 1

for numb_21i in range(1, 6):
    numb_21i *= numb21
    print("numb21 =>", numb_21i)
    numb_result_21 = numb_21i + numb15
    numb_result1_21 = numb_21i + numb15 + numb17
    if numb_result_21 == 185:
        print("numb_result =>", numb_result_21)
        count1 += 1
    elif numb_result1_21 == 185:
        print("numb_result =>", numb_result1_21)
        count1 += 1
        
print("count ->", count1)
