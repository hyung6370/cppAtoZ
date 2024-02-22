import sys

N, M = map(int, sys.stdin.readline().split())
ans = []

def back():
    if len(ans) == M:
        print(' '.join(map(str, arr)))
        return
    
    for i in range(1, N+1):
        if i not in ans:
            ans.append(i)
            back()
            ans.pop()
            
    return

back()