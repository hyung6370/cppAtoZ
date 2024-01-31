import sys

# 소수 판별 배열 초기화
primeNum = [False, False] + [True] * 999999

for i in range(2, 1000001):
    if primeNum[i]:
        for j in range(i*2, 1000001, i):
            primeNum[j] = False

T = int(sys.stdin.readline())

for i in range(T):
    count = 0
    N = int(sys.stdin.readline())
    for j in range(2, N//2+1):
        if primeNum[j] and primeNum[N-j]:
            count += 1
    print(count)