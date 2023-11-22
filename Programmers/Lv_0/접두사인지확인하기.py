def solution(my_string, is_prefix):
    if my_string.startswith(is_prefix):
        return 1
    else:
        return 0
    
def solution2(my_string, is_prefix):
    return int(my_string.startswith(is_prefix))

def solution3(my_string, is_prefix):
    return 1 if my_string.startswith(is_prefix) else 0