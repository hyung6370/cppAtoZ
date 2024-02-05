import sys

N, K = map(int, sys.stdin.readline().split())
moneys = []
cnt = 0

for _ in range(N):
    money = int(sys.stdin.readline())
    moneys.append(money)

moneys.sort(reverse=True)
    
for money in moneys:
    if K >= money:
        cnt += K // money  
        K %= money
        if K <= 0:
            break
        
print(cnt)