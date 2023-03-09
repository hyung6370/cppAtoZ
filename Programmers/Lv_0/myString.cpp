#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        for (int j = 0; j < n; j++) {
            answer += my_string[i];
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string word;
    cin >> word >> n;

    cout << solution(word, n);

}