nx  = 0
ny = 0
tmp = 0
cnt = 1
mx = [-1,0,1,0]
my = [0,-1,0,1]
def left():
    global direction
    if direction == 3:
        direction = 0
    else:
        direction += 1
n, m = map(int, input().split())
x, y, direction = map(int, input().split())
a = [[0] * m for i in range(n)]
b = [[0] * m for i in range(n)]
for i in range(n):
    a[i] = list(map(int, input().split()))
b[x][y] = 1
while(True):
    left()
    nx = x + mx[direction]
    ny = y + my[direction]
    if a[nx][ny] == 0 and b[nx][ny] == 0:
        tmp = 0
        cnt += 1
        x = nx
        y = ny
        b[x][y] = 1
        continue
    else:
        tmp += 1
    if tmp == 4:
        nx  = x - mx[direction]
        ny = y - my[direction]
        if a[nx][ny] == 0:
            x = nx
            y = ny
            tmp = 0
        else:
            break
print(cnt)