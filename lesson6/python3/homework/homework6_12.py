#!/usr/bin/python3
# гиперпростые числа


def is_prime(numb):
    d = 2
    while d * d <= numb and numb % d != 0:
        d += 1
    return d * d > numb


def hyper_simple(numb_i):
    i = 2
    res = 0 
    res_1 = 0
    while numb_i > i:
        res = numb_i % 10
        print(res)
        #res = is_prime(numb_i % 10)
        #if res != 0:
        #    res_1 += res
#       #     print(res_1)
        numb_i //= 10
    #return res_1


numb_t = 500
print(hyper_simple(numb_t))
print(is_prime(1))
#for i in range(numb_t):
#    #result = 0;
#    result = hyper_simple(i)
#    if result == 3:
#        print(i)


