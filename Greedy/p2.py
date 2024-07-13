n,m,k = map(int, input().split())
a = list(map(int, input().split()))
a = sorted(a, reverse=True)
print(a[0], a[1])
first = a[0] * k + a[1]
second = a[0]
result = m//(k+1) * first + m%(k+1) * second
print(result)

