import sys

N, K = map(int, sys.stdin.readline().split())
n = []
for _ in range(N):
    n.append(int(sys.stdin.readline()))

s = 1
e = max(n)

while s <= e:
    mid = (s + e) // 2
    lan = 0
    for i in n:
        lan += i//mid
    if lan >= K:
        s = mid + 1
    else:
        e = mid - 1
        
print(e)