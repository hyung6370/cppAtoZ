def solution(n, k):
    answer = []
    for i in range(1, n+1):
        if k * i < n+1:
            answer.append(k * i)
    return answer

def solution2(n, k):
    return [k * i for i in range(1, n+1) if k * i < n+1]
    