#!/usr/bin/python3
#: lesson4/python3/homework/homework4_17.py

entered_numb = int(input("Введите трехзначеное или четырехзначиное натуральное"
                         "число => "))
result1 = entered_numb % 10
result2 = entered_numb // 10 % 10
result3 = entered_numb // 100 % 10
result4 = entered_numb // 1000
if entered_numb > 100 and entered_numb < 1000:
    if result1 == result3:
        print("В число есть две одинаковые цыфры.")
    elif result1 == result2:
        print("В число есть две одинаковые цыфры.")
    elif result2 == result3:
        print("В число есть две одинаковые цыфры.")
    else:
        print("В число нет две одинаковые цыфры.")
elif entered_numb > 1000 and entered_numb < 10000:
    if result1 == result4:
        print("В число есть две одинаковые цыфры.")
    elif result1 == result2:
        print("В число есть две одинаковые цыфры.")
    elif result2 == result3:
        print("В число есть две одинаковые цыфры.")
    elif result3 == result4:
        print("В число есть две одинаковые цыфры.")
    else:
        print("В число есть две одинаковые цыфры.")
else:
    print("Читайте лучше заголовок!")


