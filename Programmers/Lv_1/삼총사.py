from itertools import combinations

def solution(number):
    res = combinations(map(int, number), 3)
    return sum(1 for i in res if sum(i) == 0)