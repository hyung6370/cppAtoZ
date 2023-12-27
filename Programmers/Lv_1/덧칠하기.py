def solution(n, m, section):
    ans, cnt, cur = 0, 0, 0
    for i in range(len(section)):
        if cur > section[i]:
            continue
        cnt += 1
        cur = section[i] + m
        
    ans = cnt
    return ans

def solution2(n, m, section):
    ans = 1
    prev = section[0]
    
    for sec in section:
        if sec-prev >= m:
            prev = sec
            answer += 1
            
    return ans
            