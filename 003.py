import time

LIMIT = 600851475143

start = time.perf_counter()
ans = 0
target = LIMIT
for i in range(3, int(target ** 0.5) + 1, 2):
    if target % i == 0:
        ans = max(ans, i)
        target /= i
print(ans, time.perf_counter() - start)
