def solution(s):
    return True if (len(s) == 4 or len(s) == 6) and s.isdecimal() else False
    
def solution2(s):
    return s.isdigit() and len(s) in [4, 6]