#include <iostream>
#include <queue>
#define MAX 101
using namespace std;

int dz[] = {0, 0, 0, 0, -1, 1};
int dx[] = {0, 1, 0, -1, 0, 0};
int dy[] = {-1, 0, 1, 0, 0, 0};

int tomatoCase[MAX][MAX][MAX];

int N, M, H;
queue<pair<pair<int, int>, int>> q;

void bfs() {
  while (!q.empty()) {
    int z = q.front().first.first;
    int x = q.front().first.second;
    int y = q.front().second;

    q.pop();

    for (int i = 0; i < 6; i++) {
      int zz = z + dz[i];
      int xx = x + dx[i];
      int yy = y + dy[i];

      if (xx < 0 || yy < 0 || zz < 0 || xx >= N || yy >= M || zz >= H) continue;
      if (tomatoCase[zz][xx][yy] == -1) continue;
      if (tomatoCase[zz][xx][yy] == 0) {
        tomatoCase[zz][xx][yy] = tomatoCase[z][x][y]+1;
        q.push({{zz, xx}, yy});
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> M >> N >> H;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++) {
        cin >> tomatoCase[i][j][k];
        if (tomatoCase[i][j][k] == 1) {
          q.push({{i, j}, k});
        }
      }
    }
  }

  int result = 0;
  bfs();

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++) {
        result = max(result, tomatoCase[i][j][k]-1);
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < M; k++) {
        if (tomatoCase[i][j][k] == 0) result = -1;
      }
    }
  }

  cout << result << '\n';

  return 0;
}