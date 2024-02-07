import sys

N = int(sys.stdin.readline())
n = sorted(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
m = map(int, sys.stdin.readline().split())

def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    
    while low <= high:
        mid = (low + high) // 2
        guess = arr[mid]
        
        if guess == target:
            return True
        if guess > target:
            high = mid - 1
        else:
            low = mid + 1
    return False

for i in m:
    if binary_search(n, i):
        print(1)
    else:
        print(0)