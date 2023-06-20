#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;
  string s;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> s;
    cout << s[0] << s[s.size()-1] << '\n';
  }

  return 0;
}