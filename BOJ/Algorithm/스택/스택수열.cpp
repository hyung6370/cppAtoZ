#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data, cnt = 1;
  stack<int> s;
  vector<char> v;

  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cin >> data;
    
    while (cnt <= data) {
      s.push(cnt); v.push_back('+');
      cnt++;
    }

    if (s.top() == data) {
      s.pop(); v.push_back('-');
    }
    else {
      cout << "NO";
      return 0;
    }
  }

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << '\n';
  }
}