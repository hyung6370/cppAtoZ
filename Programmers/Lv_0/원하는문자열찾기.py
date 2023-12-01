def solution(myString, pat):
    return 1 if pat.lower() in myString.lower() else 0

def solution2(myString, pat):
    return int(pat.lower() in myString.lower())