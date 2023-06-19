#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 100001

vector<int> arr[MAX];
vector<int> visited(MAX, 0);
int cnt;

void dfs(int start) {
  visited[start] = 1;

  for (auto& edge : arr[start]) {
    if (!visited[edge]) {
      dfs(edge);
      cnt++;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int comN, uvN, u, v;
  cin >> comN >> uvN;

  for (int i = 0; i < uvN; i++) {
    cin >> u >> v;

    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  for (int i = 1; i <= comN; i++) {
    sort(arr[i].begin(), arr[i].end());
  }
  
  dfs(1);

  // for (int i = 1; i <= uvN+1; i++) {
  //   cout << "Node " << i << ": ";
  //   for (int j = 0; j < arr[i].size(); j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << '\n';
  // }

  cout << cnt << '\n';
}