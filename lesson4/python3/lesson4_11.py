#!/usr/bin/python3


for numb in range(2, 101):

    k_numb = 2
    while k_numb * k_numb <= numb and numb % k_numb != 0:
        k_numb += 1
    if k_numb * k_numb > numb:
        print("numb =", numb)

