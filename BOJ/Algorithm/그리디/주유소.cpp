#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long solution(int N, vector<int> rl, vector<int> pl) {
  long long money = pl[0];
  long long answer = 0;

  for (int i = 0; i < N-1; i++) {
    money = min(money, (long long)pl[i]);
    answer += rl[i] * money;
  }

  return answer;
}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  vector<int> rl(N-1);
  vector<int> pl(N);
  for (int i = 0; i < N-1; i++) {
    cin >> rl[i];
  }

  for (int i = 0; i < N; i++) {
    cin >> pl[i];
  }

  cout << solution(N, rl, pl);

  return 0;
}