def solution(strings, n):
    def sortkey(x):
        return x[n]
    
    strings.sort(key = sortkey)
    return strings

def solution2(strings, n):
    new = []
    answer = []
    
    for i in range(len(strings)):
        a = strings[i][n]
        b = a + strings[i]
        new.append(b)
    new.sort()
    
    for i in range(len(new)):
        c = new[i][1:]
        answer.append(c)
        
    return answer