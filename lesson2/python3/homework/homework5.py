#!/usr/bin/python3
# Поменять занчениея переменных местами.

first_value = int(input("Введите целое число = "))
second_value = int(input("Введите целое число = "))

first_value = first_value + second_value;
second_value = first_value - second_value;
first_value = first_value - second_value;

print("first_value =>", first_value)
print("first_value =>", second_value)
