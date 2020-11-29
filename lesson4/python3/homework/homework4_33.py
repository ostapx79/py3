#!/usr/bin/python3
#: lesson4/python3/homework/homework4_33.py

first_value = 1
second_value = int(input())
division_result = first_value / second_value
result = "%.6f" % division_result

if second_value > 2 and second_value < 10:
    print(str(first_value) + '/' + str(second_value) + '=' + str(result))
else:
    print(str(first_value) + '/' + str(second_value) + '=' + str(division_result))

