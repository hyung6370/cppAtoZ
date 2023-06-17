#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct cmp {
  bool operator() (vector<int> a, vector<int> b) {
    return a.at(1) > b.at(1);
  }
};

int solution(vector<vector<int>> jobs) {
  int answer = 0;
  int time = 0;
  int j = 0;
  
  sort(jobs.begin(), jobs.end());
  priority_queue<vector<int>, vector<vector<int>>, cmp> pq;

  while (jobs.size() > j || !pq.empty()) {
    if (jobs.size() > j && time >= jobs[j][0]) {
      pq.push(jobs[j++]);
      continue;
    }

    if (!pq.empty()) {
      time += pq.top()[1];
      answer += time - pq.top()[0];
      pq.pop();
    }
    else time = jobs[j][0];
  }
  return answer / jobs.size();
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data;
  vector<vector<int>> jobs;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> data;
      v.push_back(data);
    }
    jobs.push_back(v);
    v.clear();
  }

  cout << solution(jobs);
}