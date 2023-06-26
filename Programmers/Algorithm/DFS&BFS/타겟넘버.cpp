#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> numbers, int target) {
  int answer = 0;

  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, target;
  vector<int> numbers;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }
  cin >> target;

  cout << solution(numbers, target);
}