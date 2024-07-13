n, m = map(int, input().split())
a = [[0] * m for _ in range(n)]
b = [0] * m
for i in range(n):
    a[i] = list(map(int, input().split()))
    a[i].sort()
    b[i] = a[i][0]
b.sort(reverse=True)
print(b[0])

