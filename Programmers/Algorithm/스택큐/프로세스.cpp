#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 1;
    queue<int> printOrder;
    priority_queue<int> priorityOrder;

    for (int i = 0; i < priorities.size(); i++) {
        printOrder.push(i);
        priorityOrder.push(priorities[i]);
    }

    while (!printOrder.empty()) {
        int curIdx = printOrder.front();
        int curPriority = priorities[curIdx];

        printOrder.pop();

        if (curPriority == priorityOrder.top()) {
            priorityOrder.pop();
            if (curIdx == location) break;
            else answer++;
        }
        else printOrder.push(curIdx);
    }
    return answer;
}

int theotherSolution(vector<int> priorities, int location) {
  queue<int> printer;
  vector<int> sorted;

  for (int i = 0; i < priorities.size(); i++) {
    printer.push(i);
  }

  while (!printer.empty()) {
    int now_index = printer.front();

    printer.pop();

    if (priorities[now_index] != *max_element(priorities.begin(), priorities.end())) {
      printer.push(now_index);
    }
    else {
      sorted.push_back(now_index);
      priorities[now_index] = 0;
    }
  }
  
  for (int i = 0; i < sorted.size(); i++) {
    if (sorted[i] == location) return i+1;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, data, location;
  vector<int> priorities;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> data;
    priorities.push_back(data);
  }

  cin >> location;

  cout << solution(priorities, location);

}