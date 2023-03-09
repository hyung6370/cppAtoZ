#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    if (str1.find(str2) == string::npos) answer = 2;
    else answer = 1;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    cout << solution(str1, str2);

    return 0;    
}