#!/usr/bin/python3
#: lesson6/python3/homework/homework6_4b.py


def greatest_common_factor(numb_1, numb_2):
    count1 = 2
    count2 = 2
    for count in range(2, numb_1):
        res = count1
        if numb_1 % count1 == 0:
            numb_1 //= 2
            res *= count1
            print(res)
            print(count1)
        elif numb_1 % count == 1 and numb_1 == count:
            res *= count1
            print(res)
            print(count1)
        else:
            count1 += 1
            if numb_1 % count1 == 0:
                numb_1 //= 3
                res *= count1
                print(res)
                print(count1)

        if numb_2 % count2 == 0:
            numb_2 //= 2
#            print(count2)
        elif numb_2 % count == 1 and numb_2 == count:
            print(count2)
        else:
            count2 += 1
            if numb_2 % count2 == 0:
                numb_2 //= 3
#                print(count2)


numb_1 = 36
numb_2 = 28

result = greatest_common_factor(numb_1, numb_2)
print(result)

