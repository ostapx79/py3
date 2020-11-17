#: lesson4/python3/homework/homework4_22.py

numb_1 = int(input("Введите число => "))
count_1 = 1
while count_1 != 10:
    numb_2 = int(input("Введите число => "))
    numb_1 += numb_2
    count_1 += 1
print("numb_1 =>", numb_1, "count_1 =>", count_1)

