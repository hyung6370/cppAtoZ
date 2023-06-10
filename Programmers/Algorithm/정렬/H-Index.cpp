#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
  int answer = 0;
  
  sort(citations.begin(), citations.end(), greater<int>());

  for (int i = 0; i < citations.size(); i++) {
    if (citations[i] >= i+1) answer = i+1;
  }
  
  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data;
  vector<int> citations;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> data;
    citations.push_back(data);
  }

  cout << solution(citations);

}