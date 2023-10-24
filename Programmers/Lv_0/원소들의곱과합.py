def solution(num_list):
    s = sum(num_list)**2
    m = eval('*'.join([str(n) for n in num_list]))
    
    return 1 if s > m else 0