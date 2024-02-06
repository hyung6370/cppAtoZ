import sys

N = int(sys.stdin.readline())
paper = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]
answer = [0, 0]

def traversal(x, y, N):
    color = paper[x][y]
    for row in range(x, x+N):
        for col in range(y, y+N):
            if color != paper[row][col]:
                traversal(x, y, N//2)
                traversal(x, y+N//2, N//2)
                traversal(x+N//2, y, N//2)
                traversal(x+N//2, y+N//2, N//2)
                
                return 0
    
    if color == 0:
        answer[0] += 1
    else:
        answer[1] += 1
        
traversal(0, 0, N)
for a in answer:
    print(a)