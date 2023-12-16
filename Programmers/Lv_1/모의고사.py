def solution(answers):
    one = [1, 2, 3, 4, 5]
    two = [2, 1, 2, 3, 2, 4, 2, 5]
    thr = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    score = [0, 0, 0]
    result = []
    
    for idx, answer in enumerate(answers):
        if answer == one[idx % len(one)]:
            score[0] += 1
        if answer == two[idx % len(two)]:
            score[1] += 1
        if answer == thr[idx % len(thr)]:
            score[2] += 1
            
    for idx, s in enumerate(score):
        if s == max(score):
            result.append(idx+1)
    
    return result