S = input()
list = 'abcdefghijklmnopqrstuvwxyz'

for i in list:
  if i in S:
    print(S.index(i), end = ' ')
  else:
    print(-1, end = ' ')