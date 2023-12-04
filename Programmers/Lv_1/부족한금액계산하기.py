def solution(price, money, count):
    return max(0, price * (count+1) * count // 2 - money)

def solution2(price, money, count):
    return abs(min(money - sum([price*i for i in range(1, count+1)]), 0))

def solution3(price, money, count):
    pay = 0
    for i in range(1, count+1):
        pay += (price * i)
        
    if money < pay:
        return pay - money
    else:
        return 0