n, t = map(int, input().split())

r, c, d = input().split()

r = int(r)
c = int(c)

dc = [0,1,0,-1]
dr = [-1,0,1,0]

if d == 'U':
    dindex = 0
elif d == 'R':
    dindex = 1
elif d == 'D':
    dindex = 2
elif d == 'L':
    dindex = 3
#print(r, c, dindex)
for i in range(t):
    r += dr[dindex]
    c += dc[dindex]
    #print(r, c, dindex)
    if not(1 <= r <= n) or not(1 <= c <= n):
        r -= dr[dindex]
        c -= dc[dindex]
        dindex = (dindex + 2) % 4
print(r, c)