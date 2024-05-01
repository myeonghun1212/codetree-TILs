n = int(input())


dir_to_index = {
    'W':0,
    'S':1,
    'N':2,
    'E':3
}
dx = [-1, 0, 0, 1]
dy = [0, -1, 1, 0]

x = y = 0
for i in range(n):
    d, l = input().split()

    l = int(l)

    x += dx[dir_to_index[d]] * l
    y += dy[dir_to_index[d]] * l
print(x,y)