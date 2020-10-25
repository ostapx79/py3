#!/usr/bin/python3

# Напишите программу, каторая найдет максимум и минимум из пяти случанных чисел
# вводимых пользователем, и вывести на экран.
print("Введите пять разных значений, что-бы найти максимум и минимум")
value_a = int(input("value_a => "))
value_b = int(input("value_b => "))
value_c = int(input("value_c => "))
value_d = int(input("value_d => "))
value_e = int(input("value_e => "))

print("Максимальное значение")
if value_a > value_b and value_a > value_c:
    print("value_a =>", value_a)
elif value_b > value_c and value_b > value_d:
    print("value_b =>", value_b)
elif value_c > value_d and value_c > value_e:
    print("value_c =>", value_c)
elif value_d > value_e and value_d > value_a:
    print("value_d =>", value_d)
else:
    print("value_e =>", value_e)

print("Минимальное значение")
if value_a < value_b and value_a < value_c:
    print("value_a =>", value_a)
elif value_b < value_c and value_b < value_d:
    print("value_b =>", value_b)
elif value_c < value_d and value_c < value_e:
    print("value_c =>", value_c)
elif value_d < value_e and value_d < value_a:
    print("value_d =>", value_d)
else:
    print("value_e =>", value_e)

