#include <iostream>
#include <cmath>
using namespace std;

void cantor(int N) {
  int size = pow(3, N-1);

  if (N == 0) {
    cout << "-";
    return;
  }

  cantor(N-1);
  for (int i = 0; i < size; i++) cout << ' ';
  cantor(N-1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  while (cin >> N) {
    cantor(N);
    cout << '\n';
  }
  return 0;
}