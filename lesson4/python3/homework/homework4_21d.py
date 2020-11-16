#: lesson4/python3/homework/homework4_21d.py
# a         | 549868978
# b         | 298294835
# НОД(a, b) | 17
# шаги-1    | 265
# шаги-2    | 14

numb_1 = 549868978
numb_2 = 298294835
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

numb_3 = 549868978
numb_4 = 298294835
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

