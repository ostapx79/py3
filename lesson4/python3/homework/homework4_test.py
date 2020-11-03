#!/usr/bin/python3

# На вход даются данные, парни и девченки покупают билеты в кинотятр, и мы
# должны раставаить их по местам, где, парень девченка парень девченка или наоборот.
# пример:
# mens = 3
# women = 3
# mwmwmw

guys = 3
girls = 3

if guys == girls:
    i = guys + girls
    while i != 0:
        if guys >= girls:
            gu = 'gu'
            print(gu, end='')
            guys -= 1
        else:
            gi = 'gi'
            print(gi, end='')
            girls -= 1
        i -= 1
print()
guys = 5
girls = 4

if guys > girls:
    i = guys + girls
    while i != 0:
        if guys > girls:
            gu = 'gu'
            print(gu, end='')
            guys -= 1
        elif girls > guys:
            gi = 'gi'
            print(gi, end='')
            girls -= 1
        else:
            if girls == guys and guys == girls:
                gi = 'gi'
                print(gi, end='')
                girls -= 1
            else:
                gu = 'gu'
                print(gu, end='')
                guys -= 1
        i -= 1
print()
