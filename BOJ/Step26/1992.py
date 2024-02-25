import sys

N = int(sys.stdin.readline())
board = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]

def dfs(x, y, size):
    num = board[x][y]
    for i in range(x, x+N):
        for j in range(y, y+N):
            if board[i][j] != num:
                print("(", end='')
                
                N = N//2
                dfs(x, y, N)
                dfs(x, y+N, N)
                dfs(x+N, y, N)
                dfs(x+N, y+N, N)
                print(")", end='')
                return 1
    
    if num == 1:
        print(1, end='')
    else:
        print(0, end='')
        
dfs(0, 0, N)