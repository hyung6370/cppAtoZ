#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  stack<int> s;

  int n, value;
  string command;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> command;

    if (command == "push") {
      cin >> value;
      s.push(value);
    }
    else if (command == "top") {
      if (s.empty()) {
        cout << -1 << '\n';
        continue;
      }
      else cout << s.top() << '\n';
    }
    else if (command == "empty") {
      if (s.empty()) cout << 1 << '\n';
      else cout << 0 << '\n';
    }
    else if (command == "pop") {
      if (s.empty()) cout << -1 << '\n';
      else {
        cout << s.top() << '\n';
        s.pop();
      }
    }
    else if (command == "size") {
      cout << s.size() << '\n';
    }
  }

}