#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  deque<int> dq;

  for (int i = 1; i <= 5; i++) {
    if (i % 2 == 1) dq.push_front(i);
    else dq.push_back(i);
  }

  for (int i = 1; i <= 5; i++) {
    cout << dq.front() << '\n';
    dq.pop_front();
  }
}