import time

LIMIT = 1000

start = time.perf_counter()

for a in range(3, LIMIT // 3 + 1):
    for b in range(a + 1, LIMIT // 2 + 1):
        c = LIMIT - a - b
        if c > b and a ** 2 + b ** 2 == c ** 2:
            print("%d %d %d" % (a, b, c))
            print(a*b*c, time.perf_counter() - start)
            break
    else:
        continue
    break
