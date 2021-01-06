res1 = 25
res2 = 0
for i in range(1, res1):
    #print('i -', i)
    for j in range(1, i+1):
        #print('j -', j)
        if i % j == 0:
            print(j)
