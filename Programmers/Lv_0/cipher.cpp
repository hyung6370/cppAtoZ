#include <iostream>
#include <string>
using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for (int i = code; i <= cipher.length(); i++) {
        if (i % code == 0) answer += cipher[i-1];
    }
    return answer;
}

int main() {
    string word;
    int code;
    cin >> word >> code;
    cout << solution(word, code);
}