def solution(n):
    answer = ''
    for i in range(n):
        if i % 2 == 1:
            answer += '박'
        else:
            answer += '수'
    return answer

def solution2(n):
    str = "수박" * n
    
    return str[:n]

def solution3(n):
    return "수박"*(n//2) + "수"*(n%2)