#!/usr/bin/python3

# Напишите программу, которая надет все трехзнчные и четырехзначные числа
# Армстронга. Натуральное число называется числом Армстронга, если сумма цыфр
# числа, возведенную в N-ю степень равна самому числу. Например 153 = 1^3 + 5^3
# + 3^3.

numbA1 = 100
numbA2 = 10000

for i in range(numbA1, numbA2):
    numb = len(str(i))
    if numb == 3:
        numb_result1 = (i % 10) ** numb
        numb_result2 = (i // 10 % 10) ** numb
        numb_result3 = (i // 100) ** numb
        numb_result_total = numb_result1 + numb_result2 + numb_result3
        if numb_result_total == i:
            print("numb_result_tatal =>", numb_result_total)
    else:
        numb_result1 = (i % 10) ** numb
        numb_result2 = (i // 10 % 10) ** numb
        numb_result3 = (i // 100 % 10) ** numb
        numb_result4 = (i // 1000) ** numb
        numb_result_total = (numb_result1 + numb_result2 + numb_result3 +
                             numb_result4)
        if numb_result_total == i:
            print("numb_result_total =>", numb_result_total)

