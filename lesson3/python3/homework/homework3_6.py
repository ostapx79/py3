#!/usr/bin/python3

# Напишите программу, которая вводите с клавиатуры номер месяца и выводит на
# экран сколько дней в этом месяце.


months = int(input("Вводите номер месяца => "))

print("В этом месяце,", end=' ')
if (months == 1 or months == 3 or months == 5 or months == 7 or months == 8
    or months == 10 or months == 12):
    print("трицать один день.")
elif months == 2:
    print("дватцать восим дней.")
elif months == 4 or months == 6 or months == 9 or months == 11:
    print("тридцать дней.")
else:
    print("Токого номера месеца нет!")

