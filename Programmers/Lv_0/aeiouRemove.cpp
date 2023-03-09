#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] == 'a' || my_string[i] == 'e' || my_string[i] == 'i' || my_string[i] == 'o' || my_string[i] == 'u') continue;
        else answer += my_string[i];
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    getline(cin, word);

    cout << solution(word);

    return 0;
}