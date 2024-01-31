import sys
import math

n = int(sys.stdin.readline())
a = int(sys.stdin.readline())
A = []

for i in range(n-1):
    num = int(sys.stdin.readline())
    A.append(num-a)
    a = num
    
g = A[0]

for j in range(1, len(A)):
    g = math.gcd(g, A[j])

result = 0
for k in A:
    result += k//g - 1

print(result)
    