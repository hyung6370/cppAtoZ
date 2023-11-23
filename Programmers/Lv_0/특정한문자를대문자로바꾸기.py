def solution(my_string, alp):
    answer = ''
    for i in my_string:
        if i == alp:
            answer += i.upper()
        else:
            answer += i
    return answer

def solution2(my_string, alp):
    return my_string.replace(alp, alp.upper())