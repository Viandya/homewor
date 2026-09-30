n = int(input())
a = [input() for i in range(n)]
for i in range(n - 1):
    m = i
    for j in range(i + 1, n):
        if a[j] < a[m]:
            m = j
    t = a[i]
    a[i] = a[m]
    a[m] = t
for p in a:
    print(p)
