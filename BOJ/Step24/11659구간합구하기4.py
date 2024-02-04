import sys

N, M = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))
pre = [0]
res = 0

for i in range(N):
    res += nums[i]
    pre.append(res)

for i in range(M):
    a, b = map(int, sys.stdin.readline().split())
    print(pre[b] - pre[a-1])
    