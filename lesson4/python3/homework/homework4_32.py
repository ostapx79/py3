#!/usr/bin/python3
#: lesson4/python3/homework/homework4_32.py
# В магазине продается мастика в ящиках по 15, 17, 21кг. Как купить ровное 185кг
# мастике не скрывая другие ящики? Сколько способами можно это сделать?

numb_result_185 = 185
numb15 = 15
numb17 = 17
numb21 = 21
count1 = 0
for numb_15i in range(1, 11):
    numb_15i *= numb15
    numb_result_15 = numb_15i + numb17
    numb_result1_15 = numb_15i + numb17 + numb21
    if numb_result_15 == numb_result_185:
        count1 += 1
    elif numb_result1_15 == numb_result_185:
        count1 += 1
    for numb_17j in range(11, 0, -1):
        numb_17j *= numb17
        numb_result2_15 = numb_15i + numb_17j
        if numb_result2_15 == numb_result_185:
            print(str(numb_result2_15) + ' = ' +  str(numb_15i // numb15) +
                  'банка по 15 кг + ' + str(numb_17j // numb17) +
                  'банок по 17 кг')
            count1 += 1
        for numb_21i in range(11, 0, -1):
            numb_21i *= numb21
            numb_result4_15 = numb_15i + numb_17j + numb_21i
            if numb_result4_15 == numb_result_185:
                numb15i = numb_15i // numb15
                numb17i = numb_17j // numb17
                numb21i = numb_21i // numb21
                if numb15i == 1 and numb17i == 1 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif numb15i == 1 and 1 < numb17i < 5 and numb21i == 1:
                    print(str(numb_result4_15) + " + " + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif numb15i == 1 and numb17i == 1 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif numb15i == 1 and 1 < numb17i < 5 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 1 < numb15i < 5 and numb17i == 1 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 1 < numb15i < 5 and numb17i == 1 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif 1 < numb15i < 5 and 1 < numb17i < 5 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif numb15i == 1 and numb17i == 1 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif numb15i == 1 and 1 < numb17i < 5 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif numb15i == 1 and 4 < numb17i < 1 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг + ')
                elif numb15i == 1 and 4 < numb17i < 21 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банка по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг + ')
                elif 1 < numb15i < 5 and 4 < numb17i < 21 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif 1 < numb15i < 5 and numb17i == 1 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif 1 < numb15i < 5 and 1 < numb17i < 5 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 1 < numb15i < 5 and 1 < numb17i < 5 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif 1 < numb15i < 5 and 4 < numb17i < 21 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 1 < numb15i < 5 and 4 < numb17i < 21 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банки по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif 4 < numb15i < 21 and numb17i == 1 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банка по 21 кг')
                elif 4 < numb15i < 21 and 1 < numb17i < 5 and numb21i == 1:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банка по 21')
                elif 4 < numb15i < 21 and numb17i == 1 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb17i) +
                          'банка по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 4 < numb15i < 21 and 1 < numb17i < 5 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 4 < numb15i < 21 and 1 < numb17i < 5 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb_17i) +
                          'банки по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
                elif 4 < numb15i < 21 and 4 < numb17i < 21 and 1 < numb21i < 5:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банки по 21 кг')
                elif 4 < numb15i < 21 and 4 < numb17i < 21 and 4 < numb21i < 21:
                    print(str(numb_result4_15) + ' = ' + str(numb15i)
                          + 'банок по 15 кг + ' + str(numb_17i) +
                          'банок по 17 кг + ' + str(numb21i) +
                          'банок по 21 кг')
#                print(str(numb_result4_15) + '=' + str(numb_15i // numb15) + '+' +
#                      str(numb_17j // numb17) + '+' + str(numb_21i // numb21))
#                print("numb_result =>", numb_result4_15)
                count1 += 1

print("Нашлось " + str(count1) + " решения, как купить, и в каком количестве!")

