#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, string letter) {
    my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    return my_string;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word, letter;
    cin >> word >> letter;

    cout << solution(word, letter);

    return 0;
}