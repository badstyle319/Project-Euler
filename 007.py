import time

LIMIT = 110000


def countPrime(limit):
    # Eratosthenes
    isPrime = [False if x % 2 == 0 and x > 2
               else True for x in range(0, limit + 1)]
    isPrime[0] = False
    isPrime[1] = False
    for i in range(3, int(limit ** 0.5) + 1, 2):
        if isPrime[i]:
            for j in range(i * i, limit + 1, i):
                isPrime[j] = False
    return [x for x in range(2, limit + 1) if isPrime[x]]


start = time.perf_counter()
nums = countPrime(LIMIT)
if len(nums) > 10001:
    print(nums[10000], time.perf_counter() - start)
else:
    print('LIMIT is too small')
