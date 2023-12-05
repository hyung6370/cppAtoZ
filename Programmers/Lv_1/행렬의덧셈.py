def solution(arr1, arr2):
    for i in range(len(arr1)):
        for j in range(len(arr1[0])):
            arr1[i][j] += arr2[i][j]
            
    return arr1


def solution2(arr1, arr2):
    answer = [[c + d for c, d in zip(a, b)] for a, b in zip(arr1, arr2)]
    return answer

def solution3(arr1, arr2):
    return [list(map(sum, zip(*x))) for x in zip(arr1, arr2)]