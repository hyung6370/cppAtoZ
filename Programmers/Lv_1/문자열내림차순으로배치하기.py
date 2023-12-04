def solution(s):
    return (''.join(reversed(sorted(s))))

def solution2(s):
    return (''.join(sorted(s)[::-1]))