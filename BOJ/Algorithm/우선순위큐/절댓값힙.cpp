#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct cmp {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b)) return a > b;
    else return abs(a) > abs(b);
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, x;
  cin >> N;
  priority_queue<int, vector<int>, cmp> pq;
  for (int i = 0; i < N; i++) {
    cin >> x;

    if (x == 0) {
      if (pq.empty()) cout << 0 << '\n';
      else {
        cout << pq.top() << '\n';
        pq.pop();
      }
    }
    else pq.push(x);
  }

  return 0;
}