import random

n = int(input())
a = [random.randint(2, 103) for i in range(n)]
print(*a)
for i in range(n - 1):
    m = i
    for j in range(i + 1, n):
        if a[j] < a[m]:
            m = j
    t = a[i]
    a[i] = a[m]
    a[m] = t
print(*a)
