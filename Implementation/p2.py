# Solution 1
n = int(input())
cnt = 0
for i in range(n + 1):
    for j in range(60):
        for k in range(60):
            if i % 10 == 3:
                cnt += 1
            elif j % 10 == 3 or j //10 == 3:
                cnt += 1
            elif k % 10 == 3 or k //10 == 3:
                cnt += 1      
print(cnt)
# Solution 2
n = int(input())
cnt = 0
for i in range(n + 1):
    for j in range(60):
        for k in range(60):
            if'3' in str(i) + str(j) + str(k):
                cnt += 1
print(cnt)