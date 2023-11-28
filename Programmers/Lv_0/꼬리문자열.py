def solution(str_list, ex):
    str_list = [s for s in str_list if ex not in s]
    answer = "".join(str_list)
    
    return answer

def solution2(str_list, ex):
    return ''.join(filter(lambda x: ex not in x, str_list))