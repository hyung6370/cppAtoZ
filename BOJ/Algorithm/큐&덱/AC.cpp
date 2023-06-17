#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, n;
  string P, str;
  cin >> T;

  for (int i = 0; i < T; i++) {
    bool err = false;
    deque<int> dq;
    cin >> P >> n >> str;
    string s = "";
    
    if (n != 0) {
      for (int j = 0; j < str.size(); j++) {
        if (str[j] == '[' || str[j] ==']' || str[j] == ',') {
          if (str[j] != '[') dq.push_back(stoi(s));
          s = "";
          continue;
        }
        s += str[j];
      }
    }
    
    int rev = 1;
    for (int j = 0; j < P.size(); j++) {
      if (P[j] == 'R') rev *= -1;
      else {
        if (dq.size() == 0) {
          cout << "error" << '\n';
          err = true;
          break;
        }
        if (rev == 1) dq.pop_front();
        else dq.pop_back();
      }
    }

    if (!err) {
      cout << "[";

      if (rev == 1) {
        while (!dq.empty()) {
          if (dq.size() != 1) cout << dq.front() << ",";
          else cout << dq.front();
          dq.pop_front();
        }
      }
      else {
        while (!dq.empty()) {
          if (dq.size() != 1) cout << dq.back() << ",";
          else cout << dq.back();
          dq.pop_back();
        }
      }
      cout << "]\n";
    }
  }
  return 0;
}