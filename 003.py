import math
import time

TARGET = 600851475143

start = time.perf_counter()
ans = 0
target = TARGET
for i in range(3, math.ceil(math.sqrt(target)), 2):
    if target % i == 0:
        ans = max(ans, i)
        target /= i
print(ans, time.perf_counter()-start)
