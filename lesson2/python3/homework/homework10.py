#!/usr/bin/python3
# Упражнение 9, из Си и Си++ реализована на Python3
# Высиляем значение целочисленной переменной first_numb = -22, second_numb = 4

first_numb = -22
second_numb = 4

third_numb = first_numb % second_numb + second_numb
print("third_numb =>", trihd_numb) # result: 6

third_numb = first_numb // second_numb + first_numb
print("third_numb =>", trihd_numb) # result: -28

second_numb = first_numb // second_numb
third_numb = first_numb % second_numb
print("trihd_num =>", third_numb) # result: -4

second_numb = 4
second_numb = first_numb // second_numb + second_numb
third_numb = first_numb % second_numb + first_numb
print("third_numb =>", trihd_numb) # result: -23, -22

second_numb = 4
second_numb = first_numb % second_numb + 4
third_numb = first_numb % second_numb + 1
print("third_numb =>", trihd_numb) # result: 3, 3

second_numb = 4
second_numb = first_numb // second_numb
third_numb = first_numb % (second_numb + 1)
print("third_numb =>", trihd_numb) # result: -1, -2

second_numb = 4
second_num = first_numb % second_numb
third_numb = first_numb // (second_numb + 1)
print("third_numb =>", trihd_numb) # result: -1, -5
