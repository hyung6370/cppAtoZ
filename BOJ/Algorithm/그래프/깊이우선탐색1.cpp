#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAX 100001

vector<int> arr[MAX];
vector<int> visited(MAX, 0);
int cnt;

void dfs(int start) {
  visited[start] = ++cnt;

  for (auto& edge : arr[start]) {
    if (!visited[edge]) dfs(edge);
    else continue;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, R, u, v;

  cin >> N >> M >> R;
  for (int i = 0; i < M; i++) {
    cin >> u >> v;

    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  for (int i = 1; i <= N; i++) {
    sort(arr[i].begin(), arr[i].end());
  }

  // for (int i = 1; i <= N; i++) {
  //   cout << "Node " << i << ": ";
  //   for (int j = 0; j < arr[i].size(); j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << '\n';
  // }

  dfs(R);

  for (int i = 1; i <= N; i++) {
    cout << visited[i] << '\n';
  }
}