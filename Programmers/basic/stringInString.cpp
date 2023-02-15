#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string str1, string str2) {
    for (int i = 0; i < str1.size(); i++) {
        if (str1.substr(i, str2.size()) == str2) return 1;
    }
    return 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    cout << solution(str1, str2);

    return 0;    
}