import sys
import math

N = int(sys.stdin.readline())

def check(x):
    if x == 0 or x == 1:
        return False
    
    for i in range(2, int(math.sqrt(n)) + 1):
        if x % i == 0:
            return False
    return True

for _ in range(N):
    n = int(sys.stdin.readline())
    while True:
        if check(n):
            print(n)
            break
        else:
            n += 1            
    
    
    
    
# 정수론을 이용
# 정수론에서 "임의의 양수 M이 합성수이면 루트M 보다 작거나 같은 약수를 가진다." 라는 정리를 이용
# "임의의 양수 M이 루트M 보다 작거나 같은 양수를 가지지 않으면 소수이다."라는 결과를 이용
    