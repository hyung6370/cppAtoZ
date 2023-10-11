# a = set([1, 2, 3, 4, 5])
# b = set([3, 4, 5, 6 ,7])

# print(a|b)
# print(a&b)
# print(a-b)

data = set([1, 2, 3])

data.add(4)
print(data)
# {1, 2, 3, 4}

data.update([5, 6])
print(data)
# {1, 2, 3, 4, 5, 6}

data.remove(3)
print(data)
# {1, 2, 4, 5, 6}
