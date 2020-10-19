#!/usr/bin/python3
# Напишите программу, каторая вводит трехзначное число и разбивает ее на
# цифры, при вводе числа 123 программа должна вывести 1,2,3.

first_value = int(input("Введите трехзначное значение\n"))
second_value1 = first_value // 100
second_value2 = first_value // 10 % 10
second_value3 = first_value % 10
second_value4 = (str(second_value1) + ',' + str(second_value2) + ',' +
str(second_value3))
print(second_value4)

