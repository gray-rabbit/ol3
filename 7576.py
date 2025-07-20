from collections import deque


m,n = map(int, input().split())

box = [list(map(int, input().split())) for _ in range(n)]

q = deque()

for i in range(n):
    for j in range(m):
        if box[i][j] ==1:
            q.append((i,j))

dx = [0,0,1,-1]
dy = [1,-1,0,0]

while q:
    y,x = q.popleft()
    for ddx, ddy in zip(dx,dy):
        nx = ddx+x
        ny = ddy+y
        if 0<=ny<n and 0<=nx<m and box[ny][nx] ==0:
            box[ny][nx] = box[y][x]+1
            q.append((ny,nx))

ans = 0
for line in box:
    for c in line:
        if c==0:
            print(-1)
            exit(0)
    ans = max(ans, max(line))

print(ans-1)
