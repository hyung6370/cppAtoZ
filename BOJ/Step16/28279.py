import sys
from collections import deque

N = int(sys.stdin.readline())
deque = deque()

for i in range(N):
    num = list(map(int, sys.stdin.readline().strip().split()))
    l = len(deque)
    
    if num[0] == 1:
        deque.appendleft(num[1])
    elif num[0] == 2:
        deque.append(num[1])
    elif num[0] == 3:
        print(deque.popleft() if l else -1)
    elif num[0] == 4:
        print(deque.pop() if l else -1)
    elif num[0] == 5:
        print(len(deque))
    elif num[0] == 6:
        print(0 if l else 1)
    elif num[0] == 7:
        print(deque[0] if l else -1)
    elif num[0] == 8:
        print(deque[-1] if l else -1)