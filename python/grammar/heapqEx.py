# # 추가
# heapq.heappush()

# # 제거
# heapq.heappop()

# 정렬
import heapq

def heapsort(iterable):
  h = []
  res = []
  
  for value in iterable:
    heapq.heappush(h, value) # (h, -value)
    
  for i in range(len(h)):
    res.append(heapq.heappop(h)) # (-heapq.heappop(h))
  return res

res = heapsort([1, 3, 5, 7, 9, 2, 4, 6])
print(res)
