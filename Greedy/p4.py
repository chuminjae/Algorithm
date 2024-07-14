# Solution 1
n, m = map(int, input().split())
cnt = 0
while n != 1:
    if n % m != 0:
        cnt += 1
    else:
        n //= m
        cnt += 1
print(cnt)

#Solution 2
n, m = map(int, input().split())
cnt = 0
tmp = 0
while(True):
    tmp = (n // m) * m
    cnt += n - tmp
    n = tmp
    if(n < m):
        break
    n = n // m
    cnt += 1
cnt += n - 1
print(cnt)