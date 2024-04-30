n, m = map(int, input(). split())

size = n * m

board = [[0 for _ in range(m)] for _ in range(n)]
direction = [(1,0), (0,1), (-1, 0), (0, -1)]

x, y = 0, 0
nowdir = 0
for i in range(size):
    if not( 0 <= x < m) or not(0 <= y < n) or board[y][x] != 0:
        x = x - direction[nowdir][0]
        y = y - direction[nowdir][1]
        nowdir = (nowdir + 1) % len(direction)
        x = x + direction[nowdir][0]
        y = y + direction[nowdir][1]
    board[y][x] = i + 1
    x = x + direction[nowdir][0]
    y = y + direction[nowdir][1]
    
print('\n'.join([' '.join(map(str,i)) for i in board]))