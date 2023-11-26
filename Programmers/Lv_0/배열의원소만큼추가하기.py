def solution(arr):
    answer = []
    for i in arr:
        for j in range(i):
            answer.append(i)
    return answer

def solution2(arr):
    return [i for i in arr for j in range(i)]

def solution3(arr):
    answer = []
    for num in arr:
        answer += [num] * num
    return answer