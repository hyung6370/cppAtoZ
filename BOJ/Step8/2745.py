n, b = input().rstrip().split()

n = ''.join(reversed(n))
b = int(b)

num = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

result = 0

for x in range(len(n)-1, -1, -1):
  sum = num.index(n[x]) * (b**x)
  result += sum
  
print(result)

# a, b = input().rstrip().split()

# print(int(a, int(b)))