#!/usr/bin/python3

# Напишите программу, которая вводит возраст человек (целое число не превышая
# 120) и выводит этот возраст со словом (год, года, лет: пример: 21 год, 22
# года, 25 лет).

print("Какой твой возраст?")
person_s_age = int(input("Введите возраст => "))
you = 'Тебе '

if 0 < person_s_age < 121:
    if (person_s_age == 1 or person_s_age == 21 or person_s_age == 31 or
        person_s_age == 41 or person_s_age == 51 or person_s_age == 61 or
        person_s_age == 71 or person_s_age == 81 or person_s_age == 91 or
        person_s_age == 101):
        print(you + str(person_s_age) + " год.")
    elif (1 < person_s_age < 5 or 21 < person_s_age < 25 or
          31 < person_s_age < 35 or 41 < person_s_age < 45 or
          51 < person_s_age < 55 or 61 < person_s_age < 65 or
          71 < person_s_age < 75 or 81 < person_s_age < 85 or
          91 < person_s_age < 95 or 101 < person_s_age < 105):
        print(you + str(person_s_age) + " года.")
    else:
        print(you + str(person_s_age) + " лет.")
else:
    print("Ты должен быть мертв ксажелению!!!")
