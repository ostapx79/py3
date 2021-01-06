#!/usr/bin/python3 
#: lesson6/python3/homework/homework6_10.py
# Дружественные числа - это два натуральных числа, что сумма одного делителя
# (меньших самого это числа) равна другому числу, и наоборот. Найдите все пары
# дружественных чисел, каждая из которых меньше чем 10000. Используйте функцию
# которая вычисляет сумму делителей числа.


def friendly_numbers(fri_numb_1, fri_numb_2):
    """Функция которая вычисляет, дружественные числа
    или нет."""

    result_1 = 0
    for count_1 in range(1, numb_1):
        if numb_1 % count_1 == 0:
            result_1 += count_1

    count_2 = 1
    result_2 = 0
    while count_2 < numb_2:
        if numb_2 % count_2 == 0:
            result_2 += count_2
        count_2 += 1

    if result_1 == numb_2 and result_2 == numb_1:
        return 'Дружественные числа!'
    else:
        return "Не дружественные числа!"


numb_1 = 220
numb_2 = 284

result = friendly_numbers(numb_1, numb_2)
print(result)
