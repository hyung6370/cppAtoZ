def solution(strArr):
    result = []
    for i in range(len(strArr)):
        if i % 2 == 0:
            result.append(strArr[i].lower())
        else:
            result.append(strArr[i].upper())
            
    return result


def solution2(strArr):
    return [s.lower() if i % 2 == 0 else s.upper() for i, s in enumerate(strArr)]