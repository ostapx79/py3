#: lesson4/python3/homework/homework4_21c.py
# a         | 6365133
# b         | 11494962
# НОД(a, b) | 171
# шаги-1    | 29
# шаги-2    | 13

numb1 = 6365133
numb2 = 11494962

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

numb3 = 6365133
numb4 = 11494962
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

