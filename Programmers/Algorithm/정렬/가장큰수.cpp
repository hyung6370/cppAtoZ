#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
  return a+b > b+a;
}

string solution(vector<int> numbers) {
  string answer = "";

  vector<string> v;
  for (int i = 0; i < numbers.size(); i++) {
    v.push_back(to_string(numbers[i]));
  }

  sort(v.begin(), v.end(), cmp);

  if (v[0].compare("0") == 0) return "0";

  for (int i = 0; i < v.size(); i++) {
    answer += v[i];
  }

  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data;
  cin >> n;
  vector<int> numbers;
  for (int i = 0; i < n; i++) {
    cin >> data;
    numbers.push_back(data);
  }

  cout << solution(numbers);

  return 0;
}