import sys

N = int(sys.stdin.readline())
stu = list(map(int, sys.stdin.readline().split()))
stack = []
target = 1

for i in stu:
    stack.append(i)
    while stack and stack[-1] == target:
        stack.pop()
        target += 1
    
    if len(stack) > 1 and stack[-1] > stack[-2]:
        print("Sad")
        sys.exit()
        
if stack:
    print("Sad")
else:
    print("Nice")