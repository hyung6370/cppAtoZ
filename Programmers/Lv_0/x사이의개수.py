def solution(myString):
    answer = []
    count = 0
    for i in myString:
        if i == 'x':
            answer.append(count)
            count = 0
        else:
            count += 1
    answer.append(count)
    return answer
            
def solution2(myString):
    return [len(w) for w in myString.split('x')]            