import sys

def paper(r, c, n):
    global arr, count
    
    pivot = arr[r][c]
    flag = False
    
    if n == 1:
        count[pivot-2] += 1
        return 0
    
    for i in range(r, r+n):
        for j in range(c, c+n):
            if arr[i][j] != pivot:
                for y in range(r, r+n, n//3):
                    for x in range(c, c+n, n//3):
                        paper(y, x, n//3)
                flag = True
                break
        if flag:
            break
    else:
        count[pivot-2] += 1
        return 0
    
N = int(sys.stdin.readline())
arr = [[*map(int, sys.stdin.readline().split())] for _ in range(N)]
count = [0, 0, 0]

paper(0, 0, N)
print(*count, sep='\n')