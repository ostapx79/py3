#!/usr/local/bin/python3

# Variables, and what type they can be.
# Переменые, и какова типа они могут быть.

# In C and C++ it is necessary to declare what type the variable should be,
# won't work otherwise. In Python, this is not necessary, we create a link to a cell in
# memory and see what is stored there and what type it is. Understand kakava type
# an object in memory can be called via the type () function.
# В Си и Си++ надо объявлять какова типа должно быть переменая,
# иначе не сработает. В Python это не надо делать, создаем сылку на ячейку в
# памяти и смотрим что там хранится и какова типа она есть. Понять какава типа
# объект в памяти можно вызвать через функцию type().

i = 12 # integer, целое число
print(i, type(i))
f = 234.45 # float, число с плавуещий точкой
print(f, type(f))
s = 'c'
print(s, type(s))
s_1 = 'строка' # string, что символ что строка одинаково
print(s_1, type(s_1))
