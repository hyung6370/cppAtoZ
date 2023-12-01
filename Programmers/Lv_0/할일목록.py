def solution(todo_list, finished):
    answer = []
    for i in range(len(todo_list)):
        if finished[i] == False:
            answer.append(todo_list[i])
    return answer

def solution2(todo_list, finished):
    return [work for i, work in enumerate(todo_list) if not finished[i]]
    