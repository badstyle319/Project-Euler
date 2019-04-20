import math

d = dict()

for i in range(1, 21):
    num = i
    for j in range(2, num+1):
        cnt = 0
        while num%j==0:
            cnt+=1
            num/=j
        if j in d:
            d[j] = max(d[j], cnt)
        elif cnt>0:
            d[j] = cnt

ans = 1
for key in d:
    ans *= key**d[key]
print(ans)
