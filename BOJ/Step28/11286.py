import sys
from heapq import heappush, heappop

N = int(sys.stdin.readline())
arr = []

for _ in range(N):
    x = int(sys.stdin.readline())
    
    if not x:
        print(heappop(arr) [1] if arr else 0)
        continue
    
    heappush(arr, (abs(x), x))