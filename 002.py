import time

start = time.perf_counter()
num1 = 0
num2 = 1
sum = 0
n = num1+num2
while n <= 4000000:
    if n % 2 == 0:
        sum += n
    num1 = num2
    num2 = n
    n = num1+num2
print(sum, time.perf_counter()-start)

'''
F(n)=F(n-1)+F(n-2)
	=F(n-3)+2F(n-2)
	=F(n-3)+2(F(n-3)+F(n-4))
	=3F(n-3)+2F(n-4)
	=3F(n-3)+F(n-4)+F(n-5)+F(n-6)
	=4F(n-3)+F(n-6)
1,2,3,5,8,13,21,34,55,89,144,...
find sum of F(2)+F(5)+F(8)+F(11)+...
'''
start = time.perf_counter()
F = dict()
F[2] = 2
F[5] = 8
sum = F[2] + F[5]
k = 8
F[k] = 4 * F[k-3] + F[k-6]
while F[k] <= 4000000:
    sum += F[k]
    k += 3
    F[k] = 4 * F[k-3] + F[k-6]
print(sum, time.perf_counter()-start)
