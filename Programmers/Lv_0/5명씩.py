def solution(names):
    answer = []
    for i in range(0, len(names), 5):
        answer.append(names[i])
    return answer

def solution2(names):
    return names[::5]