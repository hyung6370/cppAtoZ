#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
  int j = s.size()-1;
  int cnt = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == s[j--]) cnt++;
  }

  if (cnt == s.size()) return 1;
  else return 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  cout << check(s);
}