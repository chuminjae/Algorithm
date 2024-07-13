a = int(input())
cnt = 0
change = [500,100,50,10]
for b in change:
    cnt += a // b
    a %= b
print(cnt)