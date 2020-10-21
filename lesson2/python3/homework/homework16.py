#!/usr/bin/python3
# Опесание к этому файлу можно найти в homework16.c.

import random

first_student = 1;
number_of_students = 30;

first_attendant = random.randint(first_student, number_of_students)
second_attendants = random.randint(first_student, number_of_students)

print("Первый дежурный ученик под номером =>", first_attendant)
print("Второй дежурный ученик под номером =>", second_attendants)

