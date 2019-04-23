import time


def isPalindromic(num):
    val = str(num)
    i = 0
    j = len(val) - 1
    while i <= j:
        if val[i] != val[j]:
            return False
        i += 1
        j -= 1
    return True


start = time.perf_counter()
ans = 1
for i in range(999, 101, -1):
    for j in range(999, 101, -1):
        if i <= j:
            num = i * j
            if num > ans and isPalindromic(num):
                ans = num
print(ans, time.perf_counter() - start)
