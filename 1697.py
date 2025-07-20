from collections import deque


n,k= map(int,input().split())

visited = [False] * 100_001

q = deque()

q.append((n,0))
visited[n] = True
while q:
    v, sec = q.popleft()
    if v==k:
        print(sec)
        break
    for new_v in (v*2, v-1, v+1):
        if new_v < 0  or new_v >100_000:
            continue

        if visited[new_v]==False:
            visited[new_v] = True
            q.append((new_v, sec+1))
