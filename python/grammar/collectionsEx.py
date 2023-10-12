# from collections import deque

# data = deque([2, 3, 4])
# data.appendleft(1)
# data.append(5)

# print(data)

from collections import Counter

counter = Counter(['red', 'blue', 'green', 'blue'])
print(counter['blue'])
print(dict(counter))
