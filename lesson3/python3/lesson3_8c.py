#!/usr/bin/python3
# В Си и Си++, выберать можно инструкции swith case:, а в Python3 вот таким
# методом можно сделать выбор как в Си и Си++.

months = int(input("Укажите номер месяца => "))

def switch_demo(months):
    switcher = {
        1: "January",
        2: "February",
        3: "March",
        4: "April",
        5: "May",
        6: "June",
        7: "Jule",
        8: "August",
        9: "Setember",
        10: "Octomber",
        11: "November",
        12: "December",
    }
    print(switcher.get(months, "Not this months!"))

switch_demo(months)
