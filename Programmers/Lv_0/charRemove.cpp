#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] == letter[0]) continue;
        else answer += my_string[i];   
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word, letter;
    cin >> word >> letter;

    cout << solution(word, letter);

    return 0;
}