import time

LIMIT = 2000000

start = time.perf_counter()
isPrime = [i % 2 != 0 for i in range(0, LIMIT)]
isPrime[1], isPrime[2] = False, True
for i in range(3, int(LIMIT ** 0.5) + 1, 2):
    if isPrime[i]:
        for j in range(i * i, LIMIT, i):
            isPrime[j] = False
sum = 0
for i in range(0, len(isPrime)):
    if isPrime[i]:
        sum += i
print(sum, time.perf_counter() - start)
