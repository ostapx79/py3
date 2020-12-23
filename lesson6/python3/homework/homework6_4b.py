#!/usr/bin/python3
#: lesson6/python3/homework/homework6_4b.py


def greatest_common_factor(numb_1, numb_2):
    count1 = 2
    for count in range(2, numb_1):
        if numb_1 % count1 == 0 and numb_2 % count1 == 0:
            numb_1 //= 2
            print(count1)
#            print(numb_1)
        else:
            count1 += 1
            if numb_1 % count1 == 0:
                numb_1 //= 3
                print(count1)
            elif numb_1 % count == 1 or numb_1 == count:
                print(count)


numb_1 = 36
numb_2 = 28

result = greatest_common_factor(numb_1, numb_2)
print(result)

