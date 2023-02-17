#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            answer += my_string[i] - '0';
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;
    
    cout << solution(word);
    
    return 0;
}