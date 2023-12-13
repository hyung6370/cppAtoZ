def solution(array, commands):
    result = []
    for i in commands:
        sliced = array[i[0]-1:i[1]]
        sliced.sort()
        result.append(sliced[i[2]-1])
    
    return result
        
def solution2(array, commands):
    return [sorted(array[i[0]-1:i[1]])[i[2]-1] for i in commands]

def solution3(array, commands):
    answer = []
    for command in commands:
        i, j, k = command
        answer.append(list(sorted(array[i-1:j]))[k-1])