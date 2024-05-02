n = int(input())

li = []

for i in range(n):
    t = input()
    li.append(t)

for i in range(2):
    s1, e1 = map(int, input().split())

    a = li[:s1 - 1]
    b = li[e1:]
    a.extend(b)
    li = a

if len(li) == 0:
    print(0)
else:
    print(len(li))
    print('\n'.join(li))