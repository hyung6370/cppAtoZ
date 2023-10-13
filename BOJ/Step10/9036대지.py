n = int(input())

xPoints, yPoints = [], []

for _ in range(n):
    x, y = map(int, input().split())
    
    xPoints.append(x)
    yPoints.append(y)
        
print((max(xPoints) - min(xPoints)) * (max(yPoints) - min(yPoints)))