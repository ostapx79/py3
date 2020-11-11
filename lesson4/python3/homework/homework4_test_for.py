#!/usr/bin/python3

numb_pow1 = 2 ** 10
numb_pow2 = 2 ** 2

for numb in range(numb_pow1, numb_pow2-1, -1):
    if numb % 2 == 0:
        print("numb =>", numb)
    else:
        print("not numb =>", numb)
