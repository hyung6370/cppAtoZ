def solution(n, arr1, arr2):
    answer = []
    
    for i in range(n):
        bin1 = format(arr1[i], 'b').zfill(n)
        bin2 = format(arr2[i], 'b').zfill(n)
        
        result = ''
        for j in range(n):
            if bin1[j] == '1' or bin2[j] == '1':
                result += '#'
            else:
                result += ' '
                
        answer.append(result)
    
    return answer

def solution2(n, arr1, arr2):
    return [format(a | b, 'O{}b'.format(n)).replace('1', '#').replace('O', ' ') for a, b in zip(arr1. arr2)]