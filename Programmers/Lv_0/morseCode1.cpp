#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

map<string, char> m;
string arr[26] = {
    ".-","-...","-.-.","-..",".","..-.","--.","....","..",
	".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-","-.--","--.."
};

string solution(string letter) {
    string answer = "";
    string str = "";
    stringstream ss(letter);
    char c = 'a';

    for (int i = 0; i < 26; i++) {
        m[arr[i]] = c + i;
    }

    while (ss >> str) {
        answer += m[str];
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string letter;
    getline(cin, letter);

    cout << solution(letter);

    return 0;
}