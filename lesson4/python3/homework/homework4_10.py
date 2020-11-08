#!/usr/bin/python3

numb = int(input("Введите натуральное число => "))

numb_i = 1
while numb_i <= numb:
    number_result = numb // numb_i
    remainder_result = numb % numb_i
    if (number_result <= numb and remainder_result == 0) or number_result == 1:
        if number_result == 1:
            print("number_result =>", number_result)
            break;
        print("number_result =>", number_result)
    numb_i += 1

