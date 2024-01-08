import sys

n = int(sys.stdin.readline())
member = []

for _ in range(n):
    age, name = map(str, sys.stdin.readline().split())
    age = int(age)
    member.append([age, name])
    
member.sort(key=lambda x: x[0])

for i in member:
    print(i[0], i[1])