#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  cin >> N;

  vector<int>km(N-1);
  vector<int>won(N);

  for (int i = 0; i < N-1; i++) cin >> km[i];
  for (int i = 0; i < N; i++) cin >> won[i];

  long long money = won[0];
  long long answer = 0;

  for (int i = 0; i < N-1; i++) {
    money = min(money, (long long)won[i]);
    answer += km[i] * money;
  }
  cout << answer << '\n';
}