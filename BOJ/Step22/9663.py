import sys

N = int(sys.stdin.readline())

res = 0
graph_col = [0] * N

def promising(row):
    for before_row in range(row):
        if (graph_col[before_row] == graph_col[row] or abs(graph_col[before_row] - graph_col[row]) == abs(before_row - row)):
            return False
    return True

def dfs(row):
    global res
    if row == N:
        res += 1
    else:
        for i in range(N):
            graph_col[row] = i
            if promising(row):
                dfs(row+1)
                
dfs(0)
print(res)                
            