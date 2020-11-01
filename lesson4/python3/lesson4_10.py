#!/usr/bin/python3

numb = 2

while  numb < 100:
    count = 0
    k_numb = 2
    while k_numb * k_numb <= numb:
        if numb % k_numb == 0:
            count += 1
        k_numb += 1
    if count == 0:
        print("numb =", numb)
    numb += 1

