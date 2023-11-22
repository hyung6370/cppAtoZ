def solution(arr, k):
    if k % 2 == 1:
        answer = [k * i for i in arr]
    else:
        answer = [k + i for i in arr]
    return answer


def solution2(arr, k):
    return [i * k if k % 2 == 1 else i + k for i in arr]