import sys

N = int(sys.stdin.readline())
num = sorted(list(map(int, sys.stdin.readline().strip().split())))

tot, res = 0, 0
nums = []
for i in num:
    tot += i
    nums.append(tot)
    
for i in nums:
    res += i
print(res)