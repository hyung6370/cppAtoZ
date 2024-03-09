import sys

N = int(sys.stdin.readline())
arr = sorted(list(map(int, sys.stdin.readline().split(' '))))

left, right = 0, N-1

ans = abs(arr[left] + arr[right])
fin = [arr[left], arr[right]]

while left < right:
    leftValue = arr[left]
    rightValue = arr[right]
    
    sum = leftValue + rightValue
    
    if abs(sum) < ans:
        ans = abs(sum)
        fin = [leftValue, rightValue]
        
        if ans == 0:
            break
    
    if sum < 0:
        left += 1
    else:
        right -= 1

print(fin[0], fin[1])