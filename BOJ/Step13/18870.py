import sys

n = int(sys.stdin.readline())
point = sys.stdin.readline().rstrip().split()
point = list(map(int, point))
arr = sorted(set(list(map(int, point))))
points = {}

for i in range(len(arr)):
    points[arr[i]] = i

for i in point:
    print(points[i], end=" ")