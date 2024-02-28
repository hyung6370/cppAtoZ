import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

N, M, R = map(int, input().split())
graph = [[] for _ in range(N+1)]
visited = [0] * (N+1)

c = 1
def dfs(graph, v, visited):
    global c
    visited[v] = c
    
    for i in graph[v]:
        if visited[i] == 0:
            c += 1
            dfs(graph, i, visited)
            
for i in range(M):
    u, v = (map(int, input().split()))
    graph[u].append(v)
    graph[v].append(u)
    
for i in range(N+1):
    graph[i].sort(reverse=True)
    
dfs(graph, R, visited)

for i in range(1, N+1):
    print(visited[i])