#include <iostream>
#include <queue>
using namespace std;
#define MAX 1000001

int N, K;
bool visited[MAX];

void bfs(int a) {
  queue<pair<int, int>> q;
  q.push(make_pair(a, 0));

  while (!q.empty()) {
    int x = q.front().first;
    int cnt = q.front().second;
    q.pop();

    if (x == K) {
      cout << cnt;
      break;
    }

    if (x+1 >= 0 && x+1 < MAX) {
      if (!visited[x+1]) {
        visited[x+1] = true;
        q.push(make_pair(x+1, cnt+1));
      }
    }

    if (x-1 >= 0 && x-1 < MAX) {
      if (!visited[x-1]) {
        visited[x-1] = true;
        q.push(make_pair(x-1, cnt+1));
      }
    }

    if (2*x >= 0 && 2*x < MAX) {
      if (!visited[2*x]) {
        visited[2*x] = true;
        q.push(make_pair(2*x, cnt+1));
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;  
  visited[N] = true;
  bfs(N);

  return 0;
}