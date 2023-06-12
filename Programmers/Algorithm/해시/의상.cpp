#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
  int answer = 1;
  map<string, int> m;

  for (auto c : clothes) {
    m[c[1]] += 1;
  }
  
  for (auto it = m.begin(); it != m.end(); it++) {
    answer *= it->second+1;
  }

  return answer-1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  string data;
  vector<string> clothe;
  vector<vector<string>> clothes;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> data;
      clothe.push_back(data);
    }
    clothes.push_back(clothe);
    clothe.clear();
  }

  cout << solution(clothes);

}