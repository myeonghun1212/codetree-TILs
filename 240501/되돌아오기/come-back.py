n = int(input())

a = {
    'W':(-1,0),
    'S':(0,1),
    'N':(0,-1),
    'E':(1,0)
}

x = 0
y = 0
cnt = 0
for i in range(n):
    b, c = input().split()
    c = int(c)
    if cnt != 0 and x * (x + c * a[b][0]) <= 0 and y * (y + a[b][1] * c) <= 0:
        if x == 0:
            cnt += abs(y)
        else:
            cnt += abs(x)
        break
    x = x + c * a[b][0]
    y = y + c * a[b][1]
    cnt += c
print(cnt)