N, B = map(int, input().split())
result = ''

arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

while N:
  result += str(arr[N%B])
  N //= B
  
print(result[::-1])