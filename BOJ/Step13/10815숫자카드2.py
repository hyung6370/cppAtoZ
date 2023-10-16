N = int(input())
cards = list(map(int, input().split()))

M = int(input())
checks = list(map(int, input().split()))

for check in checks:
    low, high = 0, N-1 
    exist = False
    while low <= high:
        mid = (low + high) // 2
        if cards[mid] > check:  
            high = mid - 1  
        elif cards[mid] < check:  
            low = mid + 1  
        else:
            exist = True
            break
    print(1 if exist else 0, end=' ')
    