# # 순열
# from itertools import permutations

# a = ['A', 'B', 'C']
# res = list(permutations(a, 3))
# print(res)

# # 조합
# from itertools import combinations

# a = ['A', 'B', 'C']
# res = list(combinations(a, 2))
# print(res)

# # 중복순열
# from itertools import product

# a = ['A', 'B', 'C']
# res = list(product(a, repeat = 2))
# print(res)

# 중복조합
from itertools import combinations_with_replacement

a = ['A', 'B', 'C']
res = list(combinations_with_replacement(a, 2))
print(res)
