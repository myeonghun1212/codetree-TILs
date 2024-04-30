n = int(input())

arr = []
for i in range(n):
    t = list(map(int,input().split()))
    arr.append(t)

arr2 = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n):
    for j in range(n):
        if arr[i][j] == 1:
            if i > 0:
                arr2[i-1][j] += 1
            if i < n - 1:
                arr2[i + 1][j] += 1
            if j > 0:
                arr2[i][j - 1] += 1
            if j < n - 1:
                arr2[i][j + 1] += 1
            
res = 0
for i in range(n):
    for j in range(n):
        if arr2[i][j] >= 3:
            res += 1
print(res)