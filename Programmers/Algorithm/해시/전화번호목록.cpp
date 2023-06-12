#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
  set<string> temp;
  for (int i = 0; i < phone_book.size(); i++) {
    temp.insert(phone_book[i]);
  }

  for (auto it1 = temp.begin(); it1 != temp.end(); it1++) {
    for (auto it2 = it1; it2 != temp.end(); it2++) {
      if (it1 != it2) {
        if (it2->find(*it1) == 0) return false;
        else break;
      }
    }
  }
  return true;
}

bool best_solution(vector<string> phone_book) {
  bool answer = true;

  sort (phone_book.begin(), phone_book.end());

  for (int i = 0; i < phone_book.size()-1; i++) {
    if (phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size())) {
      answer = false;
      break;
    }
  }
  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);


  string info;
  vector<string> phone_book;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> info;
    phone_book.push_back(info);
  }

  cout << solution(phone_book);
}