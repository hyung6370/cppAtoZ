def solution(number, limit, power):
    answer = 0
    divisorCount = []
    for i in range(1, number+1):
        if getDivisorCount(i) > limit:
            divisorCount.append(power)
        else:
            divisorCount.append(getDivisorCount(i))
    
    answer = sum(divisorCount)
    return answer

def getDivisorCount(n):
    divisorsList = []
    for i in range(1, int(n**(1/2)) + 1):
        if (n % i == 0):
            divisorsList.append(i)
            if ((i**2) != n):
                divisorsList.append(n // i)
    
    return len(divisorsList)


def cf(n):
    a = []
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            a.append(n // i)
            a.append(i)
            
    return len(set(a))

def solution2(number, limit, power):
    return sum([cf(i) if cf(i) <= limit else power for i in range(1, number+1)])