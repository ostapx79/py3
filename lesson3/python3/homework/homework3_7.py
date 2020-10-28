#!/usr/bin/python3

print('Введите номер месяца и чсло, что-бы узнать сколько осталось до Н.Г.')
months = int(input('Введите номер месяца => '))
year = 366
line_new = 'До нового года осталось, '
end_line = 'Пожалуста наберите числа, '
numb_day_31 = 'от 1 до 31!'
numb_day_29 = 'от 1 до 29!'
numb_day_30 = 'от 1 до 30!'
day_string = ' дней.'

if months > 0 and months < 13:
    day = int(input('Введите число => '))
    if months == 1:
        if day > 0 and day < 32:
            result_day = year - day
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 2:
        months_1 = 31
        if day > 0 and day < 30:
            result_day = year - (months_1 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_29)
    elif months == 3:
        months_2 = 60;
        if day > 0 and day < 32:
            result_day = year - (months_2 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 4:
        months_3 = 91
        if day > 0 and day < 31:
            result_day = year - (months_3 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_30)
    elif months == 5:
        months_4 = 121
        if day > 0 and day < 32:
            result_day = year - (months_4 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 6:
        months_5 = 152
        if day > 0 and day < 31:
            result_day = year - (months_5 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_30)
    elif months == 7:
        months_6 = 182
        if day > 0 and day < 32:
            result_day = year - (months_6 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 8:
        months_7 = 213;
        if day > 0 and day < 32:
            result_day = year - (months_7 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 9:
        months_8 = 244
        if day > 0 and day < 31:
            result_day = year - (months_8 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_30)
    elif months == 10:
        months_9 = 274
        if day > 0 and day < 32:
            result_day = year - (months_9 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
    elif months == 11:
        months_10 = 305
        if day > 0 and day < 31:
            result_day = year - (months_10 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_30)
    else:
        months_11 = 335
        if day > 0 and day < 32:
            result_day = year - (months_11 + day)
            print(line_new + str(result_day) + day_string)
        else:
            print(end_line + numb_day_31)
else:
    print('Наберие пожалуста чесла месяцов от 1 до 12!')
