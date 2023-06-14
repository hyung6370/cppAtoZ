#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool solution(string s) {
  bool answer = true;

  stack<char> st;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') st.push(s[i]);
    else if (!st.empty() && s[i] == ')' && st.top() == '(') st.pop();
    else {
      answer = false;
      break;
    }
  }
  if (!st.empty()) answer = false;

  return answer;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  cout << solution(s);

  return 0;
}