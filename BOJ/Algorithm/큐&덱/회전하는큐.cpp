#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M, pos;
  int left, right;
  int cnt = 0;
  deque<int> dq;

  cin >> N >> M;
  for (int i = 1; i <= N; i++) dq.push_back(i);

  for (int i = 0; i < M; i++) {
    cin >> pos;
    
    for (int j = 0; j < dq.size(); j++) {
      if (dq[j] == pos) {
        left = j;
        right = dq.size()-j;
        break;
      }
    }

    if (left <= right) {
      while (dq.front() != pos) {
        dq.push_back(dq.front());
        dq.pop_front();
        cnt++;
      }
      dq.pop_front();
    }
    else {
      cnt++;
      while (dq.back() != pos) {
        dq.push_front(dq.back());
        dq.pop_back();
        cnt++;
      }
      dq.pop_back();
    }
  }
  cout << cnt;

  return 0;
}