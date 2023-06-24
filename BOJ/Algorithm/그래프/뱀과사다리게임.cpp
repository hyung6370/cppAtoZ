#include <iostream>
#include <queue>
#define MAX 102
using namespace std;

int board[MAX] = {0};
int visited[MAX] = {0};

void bfs(int x, int c) {
  queue<pair<int, int>> q;
  q.push(make_pair(x, c));

  while (!q.empty()) {
    int cur = q.front().first;
    int cnt = q.front().second;
    q.pop();

    for (int i = 1; i <= 6; i++) {
      int xx = cur + i;
      if (xx == 100) {
        cout << cnt + 1;
        return;
      }
      else if (xx < 100) {
        while (board[xx] != 0) {
          xx = board[xx];
        }

        if (!visited[xx]) {
          q.push(make_pair(xx, cnt+1));
          visited[xx] = 1;
        }
      }
    }
  }
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  int x, y, u, v;
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    board[x] = y;
  }
  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    board[u] = v;
  }

  bfs(1, 0);

  return 0;
}