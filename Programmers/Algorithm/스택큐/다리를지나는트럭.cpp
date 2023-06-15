#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
  int answer = 0;
  int index = 0, bqsum = 0, sec = 0;
  queue<int> bq;

  while (1) {
    if (index == truck_weights.size()) {
      sec += bridge_length;
      break;
    }

    sec++;
    int tmp = truck_weights[index];

    if (bq.size() == bridge_length) {
      bqsum -= bq.front();
      bq.pop();
    }

    if (bqsum + tmp <= weight) {
      bqsum += tmp;
      bq.push(tmp);
      index++;
    }
    else bq.push(0);

  }
  answer = sec;

  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, bridge_length, weight, tw;
  vector<int> truck_weights;

  cin >> bridge_length >> weight;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tw;
    truck_weights.push_back(tw);
  }

  cout << solution(bridge_length, weight, truck_weights);

  return 0;
}