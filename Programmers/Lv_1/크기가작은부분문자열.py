def solution(t, p):
    result = 0
    for i in range(len(t)-len(p)+1):
        now = t[i:len(p)+i]
        if now <= p:
            result += 1
    return result