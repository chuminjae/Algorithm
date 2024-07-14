x = 1
y = 1
def d(a):
    global x
    global y
    if a == 'R' and x < n:
        x += 1
    elif a == 'L' and x > 1:
        x -= 1
    elif a == 'D' and y < n:
        y += 1
    elif a == 'U' and y > 1:
        y -= 1

n = int(input())
s = list(input().split())
for i in range(len(s)):
    d(s[i])
print(y, x)
 