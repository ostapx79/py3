#!/usr/bin/python3

value_a = 3
value_b = 0
value_c = 7

if value_a > value_b: print("value_a =>", value_a)
else: print("value_b =>", value_b)
if value_c > value_b: print("value_c =>", value_c)
else: print("value_b =>", value_b)

if value_a > value_b and value_b > value_c:
    print("value_a =>", value_a)
elif value_b < value_c:
    print("value_c =>", value_c)
else:
    print("value_b =>", value_b)
