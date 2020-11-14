#!/usr/bin/python3
#: lesson4/python3/homework/homework4_21.py
# a         | 64168
# b         | 82678
# НОД(a, b) | 1234
# шаги-1    | 12
# шаги-2    | 4

numb1 = 64168
numb2 = 82678

count1 = 0
while numb1 != numb2:
    if numb1 > numb2:
        numb1 -= numb2
    else:
        numb2 -= numb1
    count1 += 1
print("numb1 =>", numb1)
print("numb2 =>", numb2)
print("count1 =>", count1)
print()

numb3 = 64168
numb4 = 82678

count2 = 0
while numb3 != 0 and numb4 != 0:
    if numb3 > numb4:
        numb3 %= numb4
    else:
        numb4 %= numb3
    count2 += 1
print("numb3 =>", numb3)
print("numb4 =>", numb4)
print("count2 =>", count2)
