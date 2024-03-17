import sys

def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]

def union_parent(parent, a, b):
    a = find_parent(parent, a)
    b = find_parent(parent, b)
    
    if a < b:
        parent[b] = a
    else:
        parent[a] = b

N = int(sys.stdin.readline())
M = int(sys.stdin.readline())

parent = [0] * (N+1)
for i in range(1, N+1):
    parent[i] = i
    
cities = []
for i in range(N):
    cities.append(list(map(int, sys.stdin.readline().split())))
    for j in range(N):
        if cities[i][j] == 1:
            union_parent(parent, i+1, j+1)
            
plan = list(map(int, sys.stdin.readline().split()))
plan_set = set(plan)

check = find_parent(parent, plan[0])
for i in plan_set:
    if find_parent(parent, i) != check:
        print("NO")
        exit(0)
print("YES")