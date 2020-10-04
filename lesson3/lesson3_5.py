#!/usr/bin/python3

year = int(input()) # високосный

if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print('Yean')
else:
    print('No')
