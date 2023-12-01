def solution(num_list):
    oddSum, evenSum = 0, 0
    for i in range(len(num_list)):
        if i % 2 == 0:
            oddSum += num_list[i]
        else:
            evenSum += num_list[i]
    return max(oddSum, evenSum)


def solution2(num_list):
    return max(sum(num_list[::2]), sum(num_list[1::2]))