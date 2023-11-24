def solution(num_list):
    answer = []
    num_list.sort()
    for i in range(5, len(num_list)):
        answer.append(num_list[i])
        
    return answer

def solution2(num_list):
    return sorted(num_list)[5:]

def solution3(num_list):
    num_list.sort()
    answer = num_list[5:]
    return answer