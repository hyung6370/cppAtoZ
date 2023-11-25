def solution(arr, n):
    answer = []
    if len(arr) % 2 == 1:
        for i in range(len(arr)):
            if i % 2 == 0:
                answer.append(arr[i]+n)
            else:
                answer.append(arr[i])    
    else:
        for i in range(len(arr)):
            if i % 2 == 1:
                answer.append(arr[i]+n)
            else:
                answer.append(arr[i])   
                
    return answer 


def solution(arr, n):
    N = len(arr)
    
    if N % 2:
        for i in range(0, N, 2): arr[i] += n
    else:
        for i in range(1, N, 2): arr[i] += n
        
    return arr