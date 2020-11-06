#!/usr/bin/python3

# Найдите все пятизначные числа, при диление на 133 дают остаток 125, а при деление на
# 134 дают остаток 111.

numb_1 = 50000
numb_2 = 59999 + 1
numb_o1 = 133
numb_o2 = 134

while numb_1 < numb_2:
    if numb_1 // 133 == 125:
        print("numb_1 остаток от деление на 133 =>", numb_1)
    if numb_1 // 134 == 111:
        print("numb_1 остаток от деление на 134 =>", numb_1)

    numb = numb_1 // numb_o1
    print(str(numb_1) + " // " + str(numb_o1) + ' = ' + str(numb))
    numb_1 += 1
else:
    print("Нет таких остатков 125 и 111, при деленине на 133 и 134!")
    
