result1 = 220
result2 = 284

i = 1
res_s = 0
while i < result1:
    if result1 % i == 0:
        res_s += i
    i += 1

j = 1
res_r = 0
while j < result2:
    if result2 % j == 0:
        res_r += j
    j += 1

if res_s == result2 and res_r == result1:
    print('дружественный число!')
else:
    print('не дружественные число')
