import sys

N, K = map(int, sys.stdin.readline().split())
degrees = list(map(int, sys.stdin.readline().split()))
tmp = []
tmp.append(sum(degrees[:K]))

for i in range(N-K):
    tmp.append(tmp[i] - degrees[i] + degrees[K+i])
    
print(max(tmp))