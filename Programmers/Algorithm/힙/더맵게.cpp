#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
  int answer = 0;

  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < scoville.size(); i++) pq.push(scoville[i]);

  while (!pq.empty() && pq.top() < K) {
    if (pq.size() == 1 && pq.top() < K) return -1;

    int min_first = pq.top();
    pq.pop();
    int min_sec = pq.top();
    pq.pop();

    int newone = min_first + (min_sec * 2);
    pq.push(newone);

    answer++;
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data, K;
  vector<int> scoville;
  cin >> n;
  scoville.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> data;
    scoville[i] = data;
  }

  cin >> K;

  cout << solution(scoville, K);

  return 0;
}