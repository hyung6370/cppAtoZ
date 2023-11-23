def solution(a, b):
    first = str(a) + str(b)
    second = str(b) + str(a)
    
    return int(first) if first > second else int(second)

def solution2(a, b):
    a, b = str(a), str(b)
    return int(max(a + b, b + a))

def solution3(a, b):
    return int(max(f"{a}{b}", f"{b}{a}"))