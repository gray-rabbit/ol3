from itertools import combinations


n,m = map(int,input().split())
s = input().split()
s.sort()

for st in combinations(s, n):
    ja,mo = 0, 0
    for c in st:
        if c in 'aeiou':
            mo+=1
        else:
            ja+=1
    if ja>=2 and mo>=1:
        print(*st,sep="")