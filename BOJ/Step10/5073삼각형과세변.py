while(1):
    a = list(map(int, input().split()))
    
    if a.count(0) == 3:
        break
    
    if sum(a)-max(a) <= max(a):
        print("Invalid")
        continue
    
    if len(set(a)) == 1:
        print("Equilateral")
    elif len(set(a)) == 2:
        print("Isosceles")
    else:
        print("Scalene")