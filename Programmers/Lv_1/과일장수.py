def solution(k, m, score):
    answer = 0
    score.sort(reverse=True)
    apple_box = []
    
    for i in range(0, len(score), m):
        apple_box.append(score[i:i+m])
    for apple in apple_box:
        if len(apple) == m:
            answer += min(apple) * m
            
    return answer

def solution2(k, m, score):
    return sum(sorted(score)[len(score) % m::m]) * m