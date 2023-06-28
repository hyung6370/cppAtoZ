#include <iostream>
#include <vector>
using namespace std;

int check[200];

void dfs(int cur_com, int n, vector<vector<int>> computers) {
  check[cur_com] = 1;

  for (int i = 0; i < n; i++) {
    if (check[i] == 0 && computers[cur_com][i] == 1) {
      dfs(i, n, computers);
    }
  }
}

int solution(int n, vector<vector<int>> computers) {
  int answer = 0;

  for (int i = 0; i < n; i++) {
    if (check[i] == 0) {
      dfs(i, n, computers);
      answer++;
    }
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data;
  vector<int> v;
  vector<vector<int>> computers;

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> data;
      v.push_back(data);
    }
    computers.push_back(v);
    v.clear();
  }

  cout << solution(n, computers);

  return 0;
}