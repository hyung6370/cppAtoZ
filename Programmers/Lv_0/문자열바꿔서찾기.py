def solution(myString, pat):
    a = ''
    for i in myString:
        if i == 'A':
            a += 'B'
        else:
            a += 'A'
    
    if pat in a:
        return 1
    else:
        return 0
    
def solution2(myString, pat):
    return int(''.join(['A' if i == 'B' else 'B' for i in pat]) in myString)