#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int order) {
    int answer = 0;
    string s = to_string(order);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '3' || s[i] == '6' || s[i] == '9') answer++;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int order;
    cin >> order;
    
    cout << solution(order);

    return 0;
}
