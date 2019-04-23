import time

LIMIT = 100

start = time.perf_counter()
sum1 = 0
sum2 = 0
for i in range(1, LIMIT + 1):
    sum1 += i ** 2
    sum2 += i
print(sum2 ** 2 - sum1, time.perf_counter() - start)

#Math Formula
start = time.perf_counter()
sum = (1 + LIMIT) * LIMIT // 2
sqSum = (2 * LIMIT + 1) * (LIMIT + 1) * LIMIT // 6
print(sum ** 2 - sqSum, time.perf_counter() - start)
