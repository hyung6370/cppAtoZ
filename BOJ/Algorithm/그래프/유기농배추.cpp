#include <iostream>
#include <string.h>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int map[50][50] = {0};
int visited[50][50] = {0};

int M, N, K;

void dfs(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int yy = y + dy[i];
    int xx = x + dx[i];

    if (yy < 0 || yy >= N || xx < 0 || xx >= M) continue;
    if (map[yy][xx]==1 && visited[yy][xx]==0) {
      visited[yy][xx]++;
      dfs(yy, xx);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, X, Y;
  cin >> T;
  while (T--) {
    cin >> M >> N >> K;

    memset(map, 0, sizeof(map));
    memset(visited, 0, sizeof(visited));

    int earthworn = 0;

    for (int i = 0; i < K; i++) {
      cin >> X >> Y;
      map[Y][X] = 1;
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (map[i][j]==1 && visited[i][j]==0) {
          earthworn++;
          visited[i][j]++;
          dfs(i, j);
        }
      }
    }
    cout << earthworn << '\n';
  } 
}