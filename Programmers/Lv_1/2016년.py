def solution(a, b):
    month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31]
    day = ["THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"]
    
    sum = b
    for i in range(a-1):
        sum += month[i]
    
    answer = day[sum % 7]
    return answer

def solution2(a, b):
    month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31]
    day = ["THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"]
    
    sum_days = sum(month[:a-1]) + b
    return day[sum_days % 7]