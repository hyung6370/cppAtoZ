def solution(a, b):
    c, d = max(a, b), min(a, b)
    t = 1
    while t > 0:
        t = c % d
        c, d = d, t
    
    answer = [c, int(a*b/c)]
    return answer

def solution2(n, m):
    gcd = lambda a, b : b if not a % b else gcd(b, a%b)
    lcm = lambda a, b : a*b//gcd(a, b)
    
    return [gcd(n, m), lcm(n, m)]