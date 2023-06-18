#include <iostream>
#include <cmath>
using namespace std;

long long fac(long long N) {
  if (N == 0) return 1;
  else return N * fac(N-1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long long N;
  cin >> N;

  cout << fac(N);
  return 0;
}