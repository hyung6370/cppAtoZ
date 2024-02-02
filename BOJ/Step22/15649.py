import sys

N, M = map(int, sys.stdin.readline().split())
ans = []

def backTracking():
    if len(ans) == M:
        print(" ".join(map(str, ans)))
        return
    for i in range(1, N+1):
        if i not in ans:
            ans.append(i)
            backTracking()
            ans.pop()
            
backTracking()


# 파이썬 내장 함수 이용해서 풀기
from itertools import permutations

n, m = map(int, sys.stdin.readline().split())
p = permutations(range(1, n+1), m)

for i in p:
    print(" ".join(map(str, i)))