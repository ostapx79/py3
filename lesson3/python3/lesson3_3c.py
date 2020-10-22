#!/usr/bin/python3

first_value = int(input("Введите первое целое число => "))
second_value = int(input("Введите второе целое число => "))

if first_value < second_value:
    third_value = second_value
    second_value = first_value
    first_value = third_value
    print("if block, first_value", first_value)
else:
    third_value = first_value
    first_value = second_value
    second_value = third_value
    print("else block, second_value", second_value)
