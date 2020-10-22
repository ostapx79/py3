#!/usr/bin/python3

name_last1 = int(input("Сколько лет Антдерю => "))
name_last2 = int(input("Сколько лет Косте => "))

if name_last1 > name_last2:
    print("Андрей взрослее чем Костя")
else:
    if name_last1 < name_last2:
        print("Костя взрослее чем Андрей")
    else:
        print("Андрей и Костя одного возраста")
        
