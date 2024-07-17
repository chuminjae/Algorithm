move = [(1,2),(1,-2),(-1,-2), (-1,2),(2,1),(-2,1),(-2,-1),(2,-1)]
n = input()
cnt = 0
x = ord(n[0]) - 96
y = ord(n[1]) - 48
for mv in move:
    nx = x + mv[0]
    ny = y + mv[1]
    if nx > 0 and nx < 9 and ny >0 and ny <9:
        cnt+=1
print(cnt)