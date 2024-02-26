import sys

N = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

M = int(sys.stdin.readline())
b = list(map(int, sys.stdin.readline().split()))

a.sort()

def binary_search(arr, target, s, e):
    if s > e:
        return None
    mid = (s + e) // 2
    
    if arr[mid] == target:
        return arr[s:e+1].count(target)
    elif arr[mid] < target:
        return binary_search(arr, target, mid+1, e)
    else:
        return binary_search(arr, target, s, mid-1)
    
for i in range(len(b)):
    v = binary_search(a, b[i], 0, len(a)-1)
    
    if v is not None:
        print(v, end=' ')
    else:
        print(0, end=' ')
        

# 딕셔너리 사용
# why? -> 속도가 빠르다는 장점!
dic = {}

for x in a:
    if x in dic:
        dic[x] += 1
    else:
        dic[x] = 1
        
for x in b:
    if x in dic:
        print(dic[x], end=' ')
    else:
        print('0', end=' ')