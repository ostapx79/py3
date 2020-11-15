#!/usr/bin/python3
# a         | 358853
# b         | 691042
# НОД(a, b) | 1111
# шаги-1    | 22
# шаги-2    | 6

numb1 = 358853
numb2 = 691042

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

numb3 = 358853
numb4 = 691042

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

