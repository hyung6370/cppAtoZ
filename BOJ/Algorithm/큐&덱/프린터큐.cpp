#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, N, M, pri, cnt;

  cin >> T;
  for (int i = 0; i < T; i++) {
    cnt = 0;

    cin >> N >> M;
    priority_queue<int> pq;
    queue<pair<int, int>> q;
    for (int j = 0; j < N; j++) {
      cin >> pri;
      q.push({ j, pri });
      pq.push(pri);
    }

    while (!q.empty()) {
      int index = q.front().first;
      int value = q.front().second;
      q.pop();

      if (pq.top() == value) {
        pq.pop();
        cnt++;

        if (M == index) {
          cout << cnt << '\n';
          break;
        }
      }
      else q.push({ index, value });
    }
  } 
  return 0;
}