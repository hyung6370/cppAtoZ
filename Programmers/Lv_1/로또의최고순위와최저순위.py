def solution(lottos, win_nums):
    rank = [6, 6, 5, 4, 3, 2, 1]
    
    cnt_0 = lottos.count(0)
    answer = 0
    for i in win_nums:
        if i in lottos:
            answer += 1
    
    return rank[cnt_0 + answer], rank[answer]


def solution2(lottos, win_nums):
    zero = lottos.count(0)
    a = [x for x in lottos if x in win_nums]
    max = zero + len(a)
    min = len(a)
    
    max = 7 - max if max >= 1 else 6
    min = 7 - min if min >= 1 else 6
    
    return [max, min]