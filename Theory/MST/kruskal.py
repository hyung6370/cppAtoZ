import sys

# 특정 원소가 속한 집합 찾기
def find(parent, x):
    if parent[x] == x:
        return x
    parent[x] = find(parent, parent[x])
    return parent[x]

# 두 원소가 속한 집합 찾기
def union(parent, a, b):
    a = find(parent, a)
    b = find(parent, b)
    
    if a < b:
        parent[b] = a
    else:
        parent[a] = b
        
# 노드의 개수와 간선의 개수 입력받기
v, e = map(int, sys.stdin.readline().split())
parent = [0] * (v+1)

edges = []
result = 0

# 부모 테이블 상에서, 부모를 자기 자신으로 초기화
for i in range(1, v+1):
    parent[i] = i
    
# 모든 간선에 대한 정보를 입력 받기
for _ in range(e):
    a, b, cost = map(int, sys.stdin.readline().split())
    
    # 가중치를 오름차순으로 정렬하기 위해 튜플의 첫 번째 원소를 비용으로 설정
    edges.append((cost, a, b))
    
edges.sort()

for edge in edges:
    cost, a, b = edge
    
    # 사이클이 발생하지 않는 경우에만 집합에 포함된다.
    if find(parent, a) != find(parent, b):
        union(parent, a, b)
        result += cost
        
print(result)