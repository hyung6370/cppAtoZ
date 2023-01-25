#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    set<string> s;
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        for (int j = 1; j < word.length()-i+1; j++) {
            s.insert(word.substr(i, j));
        }
    }

    cout << s.size();

    return 0;
}