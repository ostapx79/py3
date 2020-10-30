#!/usr/bin/python3

numb = 1234
count = 0

while numb > 0:
    print("numb =>", numb, end=' ')
    print("count =>", count)
    numb = numb // 10
    count += 1

