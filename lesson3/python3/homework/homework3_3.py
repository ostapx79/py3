#!/usr/bin/python3

three_digit = int(input("Введите целое число => "))

print("Введеное число является")
if 0 <= three_digit <= 9:
    print("одно-значным =>", three_digit)
elif 9 < three_digit <= 99:
    print("двух-значным =>", three_digit)
elif 99 < three_digit <= 999:
    print("трех-значным =>", three_digit)
else:
    print("четырех-значным =>", three_digit)

