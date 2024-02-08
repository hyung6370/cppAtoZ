import heapq

heap = []
values = [1, 5, 3, 2, 4]

for value in values:
    heapq.heappush(heap, -value)
    
# for i in range(5):
#     print(-heapq.heappop(heap))
print(-heapq.heappop(heap))