#res1 = 25
#res2 = 0
#for i in range(1, res1):
#    print('i -', i)
#    for j in range(1, i):
#        #print('j -', j)
#        if i % j == 0:
#            res2 += j
#            print('res2 -', res2)
res = 24
res_s = 0
for i_i in range(1, res):
    if res % i_i == 0:
        print('i_i == 0', i_i)
        res_s += i_i
    else:
        print('i_i != 0', i_i)
print('res_s -', res_s)
