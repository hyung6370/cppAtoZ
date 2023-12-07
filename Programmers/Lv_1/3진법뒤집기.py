def solution(n):
    while n > 0:
        n, r = divmod(n, 3)
        answer += str(r)
    return int(answer, 3)