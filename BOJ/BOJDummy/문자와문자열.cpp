#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int n;

  cin >> s >> n;
  cout << s[n-1];

  return 0;
}