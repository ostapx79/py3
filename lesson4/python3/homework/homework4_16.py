#!/usr/bin/python3
#: lesson4/python3/homework/homework4_16.py

entered_numb = int(input("Введите натуральное число => "))

result1 = entered_numb % 10
result2 = entered_numb // 10 % 10
result3 = entered_numb // 100
result4 = entered_numb // 100 % 10
result5 = entered_numb // 1000
if entered_numb > 0 and entered_numb < 100:
    if result1 == result2:
        print("Оба числа одинаковы.")
    else:
        print("Числа неодиноковы.")
elif entered_numb > 100 and entered_numb < 1000:
    if result1 == result2 and result3 == result1:
        print("Все числа одинаковы.")
    else:
        print("Числа неодинаковы.")
else:
    if result1 == result2 and result4 == result5 and result1 == result5:
        print("Все числоа одинаковы.")
    else:
        print("Числа неодинаковы.")

