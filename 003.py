import math

target=600851475143
ans=0

for i in range(3,int(math.sqrt(target))+1,2):
	if target%i==0:
		ans = max(ans, i)
		target/=i
print(ans)