import sys

graph = dict()
 
graph['A'] = ['B', 'C']
graph['B'] = ['A', 'D']
graph['C'] = ['A', 'G', 'H', 'I']
graph['D'] = ['B', 'E', 'F']
graph['E'] = ['D']
graph['F'] = ['D']
graph['G'] = ['C']
graph['H'] = ['C']
graph['I'] = ['C', 'J']
graph['J'] = ['I']

# 리스트를 활용한 DFS 구현
def dfs_list(graph, start_node):
    # 기본은 항상 두 개의 리스트를 별도로 관리해주는 것
    need_visited, visited = list(), list()
    
    # 시작 노드 시정
    need_visited.append(start_node)
    
    # 만약 아직 방문이 필요한 노드가 있다면
    while need_visited:
        # 그 중에서 가장 마지막 데이터 추출(스택 구조 활용)
        node = need_visited.pop()
        
        # 만약 그 노드가 방문한 목록에 없다면?
        if node not in visited:
            # 방문한 목록에 추가
            visited.append(node)
            # 그 노드에 연결된 노드를
            need_visited.extend(graph[node])
            
    return visited

print(dfs_list(graph, 'A'))


# deque를 활용한 DFS 구현
def dfs_deque(graph, start_node):
    from collections import deque
    visited = []
    need_visited = deque()
    
    # 시작 노드 설정
    need_visited.append(start_node)
    
    # 방문이 필요한 리스트가 아직 존재한다면
    while need_visited:
        
        # 시작 노드 지정
        node = need_visited.pop()
        
        # 만약 방문한 리스트에 없다면
        if node not in visited:
            # 방문 리스트에 노드 추가
            visited.append(node)
            # 인접 노드들을 방문 예정 리스트에 추가
            need_visited.extend(graph[node])
    
    return visited

print(dfs_deque(graph, 'A'))