def checkVaild(n, t):
    return 0<= t < n

n, m, time = map(int, input().split())

li = []

for i in range(n):
    t = list(map(int, input().split()))
    li.append(t)

balls = []
for i in range(m):
    r, c = map(int, input().split())
    balls.append((r-1 ,c-1))

dx = [0,0,-1,1]
dy = [1,-1,0,0]

for i in range(time):
    tempballs = []
    for ball in balls:
        m = -1
        mv = -1
        for j in range(4):
            tx = ball[1] + dx[j]
            ty = ball[0] + dy[j]
            if checkVaild(n, tx) and checkVaild(n, ty) and li[ty][tx] > mv:
                # 이동 
                m = j
                mv = li[ty][tx]
        tres = (ball[0] + dy[m], ball[1] + dx[m])
        tempballs.append(tres)
    tempballs.sort()
    r = tempballs[0]
    i = 1
    cnt = 0
    while i < len(tempballs):
        if r == tempballs[i]:
            tempballs.pop(i)
            cnt += 1
        else:
            r = tempballs[i]
            if cnt > 0:
                tempballs.remove(r)
            i += 1
            cnt = 0
    balls = tempballs

print(len(balls))