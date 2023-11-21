result = []
my_string = "i love you"
word = ''
for i in my_string:
    if i != ' ':
        word += i
    else:
        result.append(word)
        word = ''
        
result.append(word)

print(result)

def solution(my_string):
    result = []
    word = ''
    for i in my_string:
        if i != ' ':
            word += i
            
        else:
            result.append(word)
            word = ''
    
    result.append(word)
    return result


def solution2(my_string):
    return my_string.split(' ')