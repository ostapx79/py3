#!/usr/bin/python3

# задача: сложные проценты

m = int(input()) # вклад 100₽
p = int(input()) # проценты от вклада 5%
y = int(input()) # сколько лет, 1год

result = int(m * (1 + p / 100) ** y)
# после окончание года должно быть 105₽

print(result) # вывод на консоль 105
