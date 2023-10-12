a, b = map(int, input().split())
divisor = []

for i in range(1, a+1):
  if a % i == 0:
    divisor.append(i)

if b <= len(divisor):
  print(divisor[b-1])
else:
  print(0)
