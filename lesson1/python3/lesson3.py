#!/usr/local/bin/python3
"""
# Input, output of data to the console.
# Ввод, вывод на консоль.
 
# We create a link to the object, in which we will save it to memory when typing
# with the keyboard.

# Создаем ссылку на объект, при котором будем сохранять в память при вводе с 
# клавиатуре.
# ожидаем строку, целое число, и число с плавающей точкой от пользователя
# expecting a string, an integer, and a float from the user

# Before the input () function, we do not indicate that we will accept a string from the user,
# by default in Python 3 and so the input () function accepts a string. And the line inside
# function tells the user what to do, and \ n is a newline character,
# The user will enter from the keyboard from a new line.

# Перед функция input() не указываем что будем принимать от пользователя строку,
# по умолчанию в Python 3 и так функция input() принимает строку. А строка внутри
# функции говорит пользователю что ему делать, а \n символ новой строк,
# пользователь будет вводить с клавиатуры с новой строки.
"""
s = input('введите строку\n')

"""
# And for integers and floating point numbers, we write the type of the object, otherwise it will be
# throw exceptions.
# А для целых чисел и числа с плавающей точкой пишем тип объекта, а то будет
# выдавать исключения.
"""
i = int(input('введите целое число\n'))
f = float(input("введите число \n"))

print() # означает новая строка
print(s) # и выводим на консоль
print(i)
print(f)

