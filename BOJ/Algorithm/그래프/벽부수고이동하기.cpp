#include <iostream>
#include <queue>
#include <vector>
#define MAX 1001
using namespace std;

typedef struct node {
    int x;
    int y;
    int depth;
    int flag;
};

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int N, M;
int map[MAX][MAX];
bool visited[MAX][MAX][2] = { false, };

int bfs() {
  queue<node> q;

  visited[0][0][0] = true;
  q.push({ 0, 0, 1, false });

  while (!q.empty()) {
    node curr = q.front();
    q.pop();

    if (curr.x == M-1 && curr.y == N-1) {
      return curr.depth;
    }

    for (int i = 0; i < 4; i++) {
      int xx = curr.x + dx[i];
      int yy = curr.y + dy[i];

      if (xx < 0 || yy < 0 || xx >= M || yy >= N) continue;
      if (map[yy][xx] == 1 && curr.flag == 0) {
        visited[yy][xx][curr.flag+1] = true;
        q.push({ xx, yy, curr.depth+1, curr.flag+1 });
      }
      else if (map[yy][xx] == 0 && !visited[yy][xx][curr.flag]) {
        visited[yy][xx][curr.flag] = true;
        q.push({ xx, yy, curr.depth+1, curr.flag });
      }
    }
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  scanf("%d %d", &N, &M);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%1d", &map[i][j]);
    }
  }

  cout << bfs();

  return 0;
}