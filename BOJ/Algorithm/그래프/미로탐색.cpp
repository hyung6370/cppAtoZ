#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

int map[101][101];
int visited[101][101];
int dist[101][101];

int N, M;
queue<pair<int, int>> q;

// DFS 알고리즘 특성상 최단거리를 찾으려면 완전탐색을 하고,
// 그 중에서 가장 작은 값을 선택해야 하는데,
// 경로가 아주 많을 수 있으므로, 시간복잡도가 매우 커진다.
// 반면 BFS는 최단거리를 보장하기 때문에, 이러한
// 최단거리 구하기 문제들은 BFS가 더 유리하다!
void bfs(int start_x, int start_y) {         
  visited[start_x][start_y] = 1;          // 입력 받은 시작 좌표를 방문
  q.push(make_pair(start_x,start_y));     // queue 에 삽입
  dist[start_x][start_y]++;               // 시작 좌표까지 이동한 칸을 1로 지정

  // 모든 좌표를 탐색할 때까지 반복
  while (!q.empty()) {
    // queue 의 front 좌표를, 현재 좌표로 지정
    int x = q.front().first;
    int y = q.front().second;

    // qeueu 의 front 좌표 제거
    q.pop();

    // 현재 좌표와 상하좌우로 인접한 좌표 확인
    for (int i = 0; i < 4; ++i) {

      // 현재 좌표와 상하좌우로 인접한 좌표
      int x_new = x + dx[i];
      int y_new = y + dy[i];

      // 인접한 좌표가, 미로 내에 존재하는지, 방문한 적이 없는지, 이동이 가능한지 확인
      if ( (0 <= x_new && x_new < N) && (0 <= y_new && y_new < M) && !visited[x_new][y_new] && map[x_new][y_new] == 1 ) {
        visited[x_new][y_new] = 1;              // 인접 좌표는 방문한 것으로 저장
        q.push(make_pair(x_new, y_new));        // 인접 좌표를 queue 에 삽입
        dist[x_new][y_new] = dist[x][y] + 1;    // 인접 좌표까지 이동한 거리 저장
      }
    }
  }
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

  bfs(0, 0);

  cout << dist[N-1][M-1];
  // cout << '\n';
  // for (int i = 0; i < N; i++) {
  //   for (int j = 0; j < M; j++) {
  //     cout << map[i][j];
  //   }
  //   cout << '\n';
  // }

}