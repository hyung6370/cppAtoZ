#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define MAX 100001

vector<int> arr[MAX];
vector<int> dfsVisited(MAX, 0);
vector<int> bfsVisited(MAX, 0);

void dfs(int start) {
  dfsVisited[start] = 1;
  cout << start << " ";
  for (int i = 0; i < arr[start].size(); i++) {
    int end = arr[start][i];
    if (!dfsVisited[end]) dfs(end);
  }
}

void bfs(int start) {
  queue<int> q;
  q.push(start);
  bfsVisited[start] = 1;

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << " ";

    for (int i = 0; i < arr[x].size(); i++) {
      int y = arr[x][i];
      if (!bfsVisited[y]) {
        q.push(y);
        bfsVisited[y] = 1;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, V, a, b;
  cin >> N >> M >> V;
  for (int i = 0; i < M; i++) {
    cin >> a >> b;

    arr[a].push_back(b);
    arr[b].push_back(a);
  }

  for (int i = 1; i <= N; i++) {
    sort(arr[i].begin(), arr[i].end());
  }

  dfs(V);
  cout << '\n';
  bfs(V);

  return 0;
}