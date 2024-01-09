import sys

n = int(sys.stdin.readline())
status = {}

for _ in range(n):
    name, command = sys.stdin.readline().strip().split()
    
    if command == 'enter':
        status[name] = True
    elif command == 'leave':
        status.pop(name, None)
        
sortedNames = sorted(status.keys(), reverse=True)

for name in sortedNames:
    print(name)