import sys
sys.setrecursionlimit(10**9)
T = int(sys.stdin.readline())

def dfs(start, cnt):
    visited[start] = 1
    
    for adj_node in graph[start]:
        if visited[adj_node] == 0:
            cnt = dfs(adj_node, cnt+1)
            
    return cnt


for _ in range(T):
    N, M = map(int, sys.stdin.readline().split())
    graph = [[] for _ in range(N+1)]
    visited = [0]*(N+1)
    
    for _ in range(M):
        a, b = map(int, sys.stdin.readline().split())
        graph[a].append(b)
        graph[b].append(a)
        
    print(dfs(1, 0))