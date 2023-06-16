#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  queue<int> q;
  int N, X;
  string cmd;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> cmd;
    if (cmd == "push") {
      cin >> X;
      q.push(X);
    }
    else if (cmd == "pop") {
      if (!q.empty()) {
        cout << q.front() << '\n';
        q.pop();
      }
      else cout << -1 << '\n';
    }
    else if (cmd == "size") {
      cout << q.size() << '\n';
    }
    else if (cmd == "empty") {
      if (q.empty()) cout << 1 << '\n';
      else cout << 0 << '\n';
    }
    else if (cmd == "front") {
      if (!q.empty()) cout << q.front() << '\n';
      else cout << -1 << '\n';
    }
    else if (cmd == "back") {
      if (!q.empty()) cout << q.back() << '\n';
      else cout << -1 << '\n';
    }
  }
}