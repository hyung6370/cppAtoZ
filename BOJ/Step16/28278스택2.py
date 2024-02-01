import sys

N = int(sys.stdin.readline().strip())
stack = []

def selectNum(x):
    if x[0] == 1:
        stack.append(x[1])
    elif x[0] == 2:
        if not stack:
            return -1
        else:
            top = stack.pop()
            return top
    elif x[0] == 3:
        return len(stack)
    elif x[0] == 4:
        return 1 if not stack else 0
    else:
        return -1 if not stack else stack[-1]

for _ in range(N):
    n = list(map(int, sys.stdin.readline().strip().split()))
    result = selectNum(n)
    if n[0] != 1:
        print(result)

