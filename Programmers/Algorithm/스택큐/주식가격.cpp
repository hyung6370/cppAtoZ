#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
  vector<int> answer(prices.size(), 0);

  for (int i = 0; i < prices.size(); i++) {
    for (int j = i+1; j < prices.size(); j++) {
      if (prices[i] > prices[j]) j = prices.size();
      answer[i]++;
    }
  }

  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, price;
  vector<int> prices, result;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> price;
    prices.push_back(price);
  }

  result = solution(prices);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}