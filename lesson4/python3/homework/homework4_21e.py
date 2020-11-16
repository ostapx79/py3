#: lesson4/python3/homework/homework4_21e.py
# a         | 17905514
# b         | 23108855
# НОД(a, b) | 4321
# шаги-1    | 56
# шаги-2    | 8

numb_1 = 17905514
numb_2 = 23108855
count_1 = 0

while numb_1 != numb_2:
    if numb_1 > numb_2:
        numb_1 -= numb_2
    else:
        numb_2 -= numb_1
    count_1 += 1
print("numb_1 =>", numb_1)
print("numb_2 =>", numb_2)
print("count_1 =>", count_1)

numb_3 = 17905514
numb_4 = 23108855
count_2 = 0

while numb_3 != 0 and numb_4 != 0:
    if numb_3 > numb_4:
        numb_3 %= numb_4
    else:
        numb_4 %= numb_3
    count_2 += 1
print("numb_3 =>", numb_3)
print("numb_4 =>", numb_4)
print("count_2 =>", count_2)

