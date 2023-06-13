#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int k;
	cin >> k;
	
	while (k > 0) {
		k--;
		string brackets;
		cin >> brackets;

		stack<char> st;
		string answer = "YES";
		for (int i = 0; i < brackets.length(); i++) {
			if (brackets[i] == '(') {
				st.push(brackets[i]);
			}
			else if (!st.empty() && brackets[i] == ')' && st.top() == '(') {
				st.pop();
			}
			else {
				answer = "NO";
				break;
			}
		}
		if (!st.empty()) answer = "NO";

		cout << answer << '\n';
	}
	return 0;
}