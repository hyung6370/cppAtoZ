# n, m = map(int, input().split())
# result = 0

# s1, s2 = [], []
# for _ in range(n):
#     s1.append(input())

# for _ in range(m):
#     s2.append(input())
    
# _dict = {}
# for i in range(len(s1)):
#     _dict[s1[i]] = 0
    
# for i in range(m):
#     if s2[i] not in _dict:
#         continue
#     else:
#         result += 1
        
# print(result)

import sys

input = sys.stdin.readline

n, m = map(int, input().split())

s = set([input() for _ in range(n)])
cnt = 0

for _ in range(m):
    t = input()
    if t in s:
        cnt += 1
        
print(cnt)