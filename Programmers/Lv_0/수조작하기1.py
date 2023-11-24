def solution(n, control):
    for i in control:
        if i == 'w':
            n += 1
        elif i == 's':
            n -= 1
        elif i == 'd':
            n += 10
        elif i == 'a':
            n -= 10
            
    return n
        
        
def solution2(n, control):
    key = dict(zip(['w', 's', 'd', 'a'], [1, -1, 10, -10]))
    
    return n + sum([key[c] for c in control])