from collections import deque

def dfs(n):

    for c in graph[n]:
        if visited[c] ==False:
            visited[c] = True
            dfs(c)



n = int(input())
m = int(input())
graph = [[] for _ in range(n+1)]
for _ in range(m):
    a,b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = [False] * (n+1)

q = deque()
q.append(1) #다음번 확인해야할 정점
visited[1] = True #방문 했다는 표시
dfs(1)
# while q:
#     v = q.popleft()
#     for c in graph[v]:
#         if visited[c] == False:
#             q.append(c)
#             visited[c] = True

print(visited)