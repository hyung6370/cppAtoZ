#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int tomatoCase[MAX][MAX];

int N, M;
queue<pair<int, int>> q;

void bfs() {
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;

    q.pop();

    for (int i = 0; i < 4; i++) {
      int xx = x + dx[i];
      int yy = y + dy[i];

      if (xx < 0 || yy < 0 || xx >= M || yy >= N) continue;
      if (tomatoCase[xx][yy] == -1) continue;
      if (tomatoCase[xx][yy] == 0) {
        tomatoCase[xx][yy] = tomatoCase[x][y]+1;
        q.push(make_pair(xx, yy));
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> tomatoCase[i][j];
      if (tomatoCase[i][j] == 1) {
        q.push(make_pair(i, j));
      }
    }
  }

  int result = 0;
  bfs();

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      result = max(result, tomatoCase[i][j]-1);
    }
  }
  
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (tomatoCase[i][j] == 0) result = -1;
    }
  }

  cout << result << '\n';

  return 0;
}