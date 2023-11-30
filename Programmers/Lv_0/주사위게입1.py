def solution(a, b):
    answer = 0
    if a % 2 == 1 and b % 2 == 1:
        answer += (pow(a, 2) + pow(b, 2))
    elif a % 2 == 1 or b % 2 == 1:
        answer += (2 * (a + b))
    else:
        answer += abs(a - b)
        
    return answer

def solution2(a, b):
    return a*a + b*b if a & b & 1 else (a + b) << 1 if (a | b) & 1 else abs(a - b)

def solution3(a, b):
    if a % 2 and b % 2: return a*a + b*b
    elif a % 2 or b % 2: return 2 * (a+b)
    return abs(a-b)