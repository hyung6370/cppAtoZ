def solution(num_str):
    result = 0
    for i in num_str:
        result += int(i)
        
    return result

def solution2(num_str):
    return sum(map(int, list(num_str)))