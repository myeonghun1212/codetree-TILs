n,t = map(int, input().split())

c, r, d = input().split()
r = int(r)
c = int(c)


direction = {
    'U': (0,-1),
    'D':(0,1),
    'R':(1,0),
    'L':(-1,0)
}

reverse = {
    'U': 'D',
    'D' : 'U',
    'R' : 'L',
    'L' : 'R',
}
skip = False
#print(r, c, d)
for i in range(t+1):
    if skip:
        skip = False
        continue
    r, c = r+direction[d][0], c + direction[d][1]
    
    tr = max(r, 1)
    tc = max(c, 1)
    tr = min(tr, n)
    tc = min(tc, n)
    if r != tr or c != tc:
        d = reverse[d]
        skip = True
    r = tr
    c = tc
    #print(r, c, d)
print(c, r)