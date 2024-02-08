import sys
import heapq

N = int(sys.stdin.readline())
arr = []

def max_heap(arr):
    if arr:
        print(-heapq.heappop(arr))
    else:
        print(0)

for _ in range(N):
    num = int(sys.stdin.readline())
    if num == 0:
        max_heap(arr)
    else:
        heapq.heappush(arr, -num)
        
    