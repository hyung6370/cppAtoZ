#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < skip.size(); i++) {
        auto it = find(alphabet.begin(), alphabet.end(), skip[i]) - alphabet.begin();
        alphabet.erase(alphabet.begin() + it);
    }

    for (int i = 0; i < s.size(); i++) {
        auto it = find(alphabet.begin(), alphabet.end(), s[i]);

        if (it != alphabet.end()) {
            int alphabetIndex = distance(alphabet.begin(), it);
            s[i] = alphabet[(alphabetIndex + index) % alphabet.size()];
        }
    }

    answer = s;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, skip;
    int index;

    cin >> s >> skip >> index;

    cout << solution(s, skip, index);

    return 0;
}