import sys

n, s = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))

left, right = 0, 0
sum = 0
min_len = 1e9

while 1:
    if sum >= s:
        min_len = min(min_len, right-left)
        sum -= nums[left]
        left += 1
    elif right == n:
        break
    else:
        sum += nums[right]
        right += 1
        
if min_len == 1e9:
    print(0)
else:
    print(min_len)