#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define RED 2
#define BLUE 3

vector<int> graph[20001];
int visited[20001];
int V, E;

void dfs(int start) {
  if (visited[start] == 0) visited[start] = RED;

  for (int i = 0; i < graph[start].size(); i++) {
    int index = graph[start][i];

    if (visited[index] == 0) {
      if (visited[start] == RED) visited[index] = BLUE;
      else if (visited[start] == BLUE) visited[index] = RED;

      dfs(index);
    }
  }
}

int check() {
  for (int i = 1; i <= V; i++) {
    for (int j = 0; j < graph[i].size(); j++) {
      int index = graph[i][j];
      if (visited[i] == visited[index]) return false;
    }
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, u, v;

  cin >> T;
  while (T--) {
    cin >> V >> E;

    for (int i = 0; i < E; i++) {
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }

    for (int i = 1; i <= V; i++) {
      if (visited[i] == 0) dfs(i);
    }

    if (check() == 0) cout << "NO\n";
    else cout << "YES\n";

    memset(visited, 0, sizeof(visited));
    memset(graph, 0, sizeof(graph));
  }
}