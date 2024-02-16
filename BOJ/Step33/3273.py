import sys
input = sys.stdin.readline

n = int(input())
arr = sorted(list(map(int, input().split())))
x = int(input())

res = 0
l, r = 0, n-1

while l < r:
    tmp = arr[l] + arr[r]
    
    if tmp == x:
        res += 1
        l += 1
    elif tmp < x:
        l += 1
    else:
        r -= 1
            
print(res)
    