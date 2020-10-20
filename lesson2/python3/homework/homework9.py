#!/usr/bin/python3

first_value = 26
second_value = 6

third_value = first_value % second_value + second_value
print("third_value =>", third_value) # result: 2

third_value = first_value // second_value + first_value
print("third_value =>", third_value) # result: 10

second_value = first_value // second_value
third_value = first_value // second_value
print("third_value =>", third_value) # result: 6 

second_value = 6
second_value = first_value // second_value + second_value
third_value = first_value % second_value + first_value
print("third_value =>", third_value)

second_value = 6
second_value = first_value % second_value + 4
third_value = first_value % second_value + 1
print("third_value =>", third_value)

second_value = 6
second_value = first_value // second_value
third_value = first_value % (second_value + 1)
print("third_value =>", third_value)

second_value = 6
second_value = first_value % second_value
third_value = first_value // (second_value + 1)
print("third_value =>", third_value)
