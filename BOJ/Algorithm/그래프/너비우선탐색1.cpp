#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define MAX 100001

vector<int> graph[MAX];
vector<int> visited(MAX, 0);
int cnt;

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = ++cnt;

  while (!q.empty()) {
    int x = q.front();
    q.pop();

    for (int i = 0; i < graph[x].size(); i++) {
      int y = graph[x][i];
      if (!visited[y]) {
        cnt++;
        q.push(y);
        visited[y] = cnt;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, R, u, v;

  cin >> N >> M >> R;
  for (int i = 0; i < M; i++) {
    cin >> u >> v;

    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  for (int i = 1; i <= N; i++) {
    sort(graph[i].begin(), graph[i].end());
  }

  bfs(R);

  for (int i = 1; i <= N; i++) {
    cout << visited[i] << '\n';
  }
}