from collections import deque
import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

N, M, R = map(int, input().split())
graph = [[] for _ in range(N+1)]
visited = [0] * (N+1)

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = 1
    count = 2
    
    while queue:
        v = queue.popleft()
        for i in sorted(graph[v]):
            if not visited[i]:
                queue.append(i)
                visited[i] = count
                count += 1
                
for _ in range(M):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)
    
bfs(graph, R, visited)

for i in range(1, N+1):
    print(visited[i])
