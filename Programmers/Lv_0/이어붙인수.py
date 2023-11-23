def solution(num_list):
    evenNum = ''
    oddNum = ''
    for i in num_list:
        if i % 2 == 1:
            oddNum += str(i)
        else:
            evenNum += str(i)
    return int(oddNum) + int(evenNum)

def solution2(num_list):
    oddNum = ''.join(str(i) for i in num_list if i % 2 == 1)
    evenNum = ''.join(str(i) for i in num_list if i % 2 == 0)
    
    return int(oddNum) + int(evenNum)