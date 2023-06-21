#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int l, ex, ey;
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int chess[301][301];
int visited[301][301];

bool bfs(int sx, int sy) {
  queue<pair<int, int>> q;
  q.push(make_pair(sx, sy));
  visited[sx][sy] = 1;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for (int i = 0; i < 8; i++) {
      int xx = x + dx[i];
      int yy = y + dy[i];

      if (xx < 0 || yy < 0 || xx >= l || yy >= l) continue;
      if (visited[xx][yy] == 1 || chess[xx][yy] != 0) continue;

      chess[xx][yy] = chess[x][y] + 1;
      q.push(make_pair(xx, yy));
      visited[xx][yy] = 1;
      if (xx == ex && yy == ey) return true;
    }
  }
  return false;
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, sx, sy;
  cin >> T;
  while (T--) {
    cin >> l;
    cin >> sx >> sy >> ex >> ey;

    chess[sx][sy] = 1;

    if (bfs(sx, sy)) cout << chess[ex][ey]-1 << '\n';
    else cout << 0 << '\n';

    memset(chess, 0, sizeof(chess));
    memset(visited, 0, sizeof(visited));
  }
}