import sys
sys.setrecursionlimit(10**9)

V, E = map(int, sys.stdin.readline().split())
edges = []

for _ in range(E):
    edges.append(list(map(int, sys.stdin.readline().split())))
    
# Union-Find 구현
root = dict()
for i in range(1, V+1):
    root[i] = i
    
def find(x):
    if root[x] == x:
        return x
    else:
        root[x] = find(root[x])
        return root[x]

def union(x, y):
    x = find(x)
    y = find(y)
    
    root[y] = x

# 크루스칼 이용
# edge cost를 오름차순으로 정렬
edges = sorted(edges, key=lambda x: x[2])

totalCost = 0
for edge in edges:
    if find(edge[0]) == find(edge[1]):
        continue
    else:
        totalCost += edge[2]
        union(edge[0], edge[1])
        
print(totalCost)