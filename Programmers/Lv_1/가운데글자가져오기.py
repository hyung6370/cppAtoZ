def solution(s):
    answer = ''
    mid = len(s) // 2
    if len(s) % 2 == 0:
        answer += s[mid-1 : mid+1]
    else:
        answer += s[mid]
    
    return answer

def solution2(s):
    return str[(len(s)-1)//2 : len(s)//2+1]