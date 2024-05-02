n, r, c = map(int, input().split())

li = []

for i in range(n):
    t = list(map(int, input().split()))
    li.append(t)

cnt = 0
b = [[False for _ in range(n)] for _ in range(n)]

r -= 1
c -= 1
b[r][c] = True
while n * n > cnt:
    print(li[r][c], end=' ')
    if r > 0 and b[r-1][c] == False and li[r-1][c] > li[r][c]:
        r = r - 1
        b[r][c] = True
    elif r < n - 1 and b[r+1][c] == False and li[r+1][c] > li[r][c]:
        r = r + 1
        b[r][c] = True
    elif c > 0 and b[r][c-1] == False and li[r][c-1] > li[r][c]:
        c = c - 1
        b[r][c] = True
    elif c < n - 1 and b[r][c + 1] == False and li[r][c + 1] > li[r][c]:
        c = c + 1
        b[r][c] = True
    else:
        break