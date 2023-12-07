def solution(s):
    answer = []
    s = s.split(" ")
    
    for i in range(len(s)):
        for j in range(len(s[i])):
            if j % 2 == 0:
                answer.append(s[i][j].upper())
            else:
                answer.append(s[i][j].lower())
        answer.append(" ")
        
    result = "".join(answer[:-1])
    return result