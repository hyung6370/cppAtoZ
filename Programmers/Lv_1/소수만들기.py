from itertools import combinations

def solution(nums):
    cnt = 0
    res = list(combinations(nums, 3))
    for i in res:
        if primenumber(sum(i)) == True:
            cnt += 1
    return cnt
        
def primenumber(x):
    for i in range(2, x):
        if x % i == 0:
            return False
    return True