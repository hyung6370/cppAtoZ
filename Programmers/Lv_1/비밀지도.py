def solution(n, arr1, arr2):
    answer = []
    
    for i, j in zip(arr1, arr2):
        a12 = str(bin(i|j)[2:])
        a12 = a12.rjust(n, '0')
        a12 = a12.replace('1', '#')
        a12 = a12.replace('0', ' ')
        answer.append(a12)
        
    return answer

def solution2(n, arr1, arr2):
    result = []
    
    for j in range(0, len(arr1)):
        ret = ''
        num = arr1[j] | arr2[j]
        
        for i in range(0, n):
            if num % 2 == 0:
                ret = ' ' + ret
                
            else:
                ret = '#' + ret
                
            num = int(num / 2)
            
        result.append(ret)
        
    return result