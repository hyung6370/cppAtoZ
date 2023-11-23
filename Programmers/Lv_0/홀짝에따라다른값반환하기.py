def solution(n):
    even, odd = 0, 0
    for i in n:
        if i % 2 == 1:
            odd += i
        else:
            even += i*i

    return odd if n % 2 == 1 else even


def solution2(n):
    if n % 2:
        return sum(range(1, n+1, 2))
    return sum([i*i for i in range(2, n+1, 2)])