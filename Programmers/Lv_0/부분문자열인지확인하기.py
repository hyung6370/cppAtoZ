def solution(my_string, target):
    return 1 if target in my_string else 0

def solution2(my_string, target):
    return int(target in my_string)