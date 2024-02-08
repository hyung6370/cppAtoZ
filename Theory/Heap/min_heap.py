import heapq

heap = []

for i in range(1, 6):
    heapq.heappush(heap, i)
    
# for i in range(5):
#     print(heapq.heappop(heap))
print(heapq.heappop(heap))