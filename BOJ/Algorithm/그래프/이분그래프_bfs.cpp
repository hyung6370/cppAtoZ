#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

#define RED 1
#define BLUE 2

vector<int> graph[20001];
int visited[20001];
int V, E, u, v;

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = RED;

  while (!q.empty()) {
    int x = q.front();
    q.pop();

    for (int i = 0; i < graph[x].size(); i++) {
      int y = graph[x][i];
      if (!visited[y]) {
        q.push(y);
        if (visited[x] == RED) visited[y] = BLUE;
        else if (visited[x] == BLUE) visited[y] = RED;
      }
    }
  }
}

bool check() {
  for (int i = 1; i <= V; i++) {
    for (int j = 0; j < graph[i].size(); j++) {
      if (visited[i] == visited[graph[i][j]]) return false;
    }
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int K;
  cin >> K;

  while (K--) {
    cin >> V >> E;
    for (int i = 0; i < E; i++) {
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }

    for (int i = 1; i <= V; i++) {
      if (visited[i] == 0) bfs(i);
    }
    
    if (check()) cout << "YES\n";
    else cout << "NO\n";

    memset(visited, 0, sizeof(visited));
    memset(graph, 0, sizeof(graph));
  }
}