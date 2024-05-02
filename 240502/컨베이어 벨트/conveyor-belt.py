n, t = map(int,input().split())

top = list(input().split())
low = list(input().split())


for i in range(t):
    low.insert(0, top.pop())
    top.insert(0, low.pop())

print(' '.join(top))
print(' '.join(low))