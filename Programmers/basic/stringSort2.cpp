#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] >= 'A' && 'Z' >= my_string[i]) {
            my_string[i] = tolower(my_string[i]);
            answer += my_string[i];
        }
        else answer += my_string[i];
    }
    sort(answer.begin(), answer.end());

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string my_string;
    cin >> my_string;

    cout << solution(my_string);

    return 0;
}