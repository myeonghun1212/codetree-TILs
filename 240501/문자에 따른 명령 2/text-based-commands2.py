cmd = input()

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

now_dir = 0
x = y = 0
for i in range(len(cmd)):
    d = cmd[i]
    if d == 'L' :
        now_dir = (now_dir - 1 + len(dx)) % len(dx)
    elif d == 'R':
        now_dir = (now_dir + 1) % len(dx)
    else:
        x += dx[now_dir]
        y += dy[now_dir]
print(x,y)