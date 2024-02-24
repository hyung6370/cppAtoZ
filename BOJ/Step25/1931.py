import sys

N = int(sys.stdin.readline())

endPoint, res = 0, 0

arr = []
for _ in range(N):
    a, b = map(int, sys.stdin.readline().rstrip().split())
    arr.append([a, b])

arr.sort(key=lambda x: (x[1], x[0]))

for newS, newE in arr:
    if endPoint <= newS:
        res += 1
        endPoint = newE
print(res)
