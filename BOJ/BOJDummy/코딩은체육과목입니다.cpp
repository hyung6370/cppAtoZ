#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  string result="";
  cin >> N;

  while (N != 4) {
    result += "long ";
    N -= 4;
  }
  result += "long int";

  cout << result;
}