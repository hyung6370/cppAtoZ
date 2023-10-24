def solution(num_list):
    result = 0
    if len(num_list) > 12:
        result = sum(num for num in num_list)
    else:
        result = 1
        for i in range(len(num_list)):
            result *= num_list[i]
            
    return result