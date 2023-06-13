#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int answer = 0;
  int K, data;
  cin >> K;
  stack<int> s;
  for (int i = 0; i < K; i++) {
    cin >> data;
    if (data == 0) {
      s.pop();
      continue;
    }
    else s.push(data);
  }

  while (!s.empty()) {
    answer += s.top();
    s.pop();
  }

  cout << answer << '\n';
}