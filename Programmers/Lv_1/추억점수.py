def solution(name, yearning, photo):
    one = dict(zip(name, yearning))

    scores = []
    for i in photo:
        score = 0
        for j in i:
            if j in one:
                score += one[j]

        scores.append(score)    
    
    return scores