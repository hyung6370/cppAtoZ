#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
  vector<int> answer;
  queue<int> q;

  for (int i = 0; i < speeds.size(); i++) q.push(i);

  while (!q.empty()) {
    int cnt = 0;
    for (int j = 0; j < speeds.size(); j++) {
      progresses[j] += speeds[j];
    }
    
    while (!q.empty() && progresses[q.front()] >= 100) {
      cnt++; q.pop();
    }

    if (cnt != 0) answer.push_back(cnt);
  }

  return answer;
}

vector<int> best_solution(vector<int> progresses, vector<int> speeds) {
  vector<int> answer;

  int day, maxday = 0;
  for (int i = 0; i < progresses.size(); i++) {
    day = (99 - progresses[i]) / speeds[i] + 1;

    if (answer.empty() || maxday < day) {
      answer.push_back(1);
    }
    else {
      answer.back()++;
    }
    if (maxday < day) maxday = day;
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, progress, speed;
  vector<int> progresses, speeds, result;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> progress;
    progresses.push_back(progress);
  }

  for (int i = 0; i < n; i++) {
    cin >> speed;
    speeds.push_back(speed);
  }

  result = solution(progresses, speeds);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}
