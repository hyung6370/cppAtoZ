def solution(my_strings, parts):
    answer = ''
    for idx, val in enumerate(parts):
        answer += my_strings[idx][val[0]:val[1]+1]
        
    return answer

def solution2(my_strings, parts):
    answer = ''
    for i, (s, e) in enumerate(parts):
        answer += my_strings[i][s:e+1]
        
    return answer

def solution3(my_strings, parts):
    return ''.join([x[y[0]:y[1]+1] for x, y in zip(my_strings, parts)])