#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

stack<int> st;

int solution(string s) {
    int answer = 0, n = 0;
    char c = ' ';
    bool check = false;
    for(int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9') {
            check = true;
            n = n*10 + s[i]-'0';
        }
        
        else if (s[i] == '-') c = '-';
        
        else if (s[i] == ' ' && check) {
            if (c == '-') st.push(-n);
            else st.push(n);
            n = 0;
            c = ' ';
            check = false;
        }
        
        else if (!s.empty() && s[i] == 'Z') {
            st.pop();
        }
    }
    
    if (c == '-') st.push(-n);
    else st.push(n);
    
    while (!st.empty()) {
        answer += st.top();
        st.pop();
    }
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s = "";

    getline(cin, s);
    // cout << s;

    cout << solution(s);

    return 0;
}