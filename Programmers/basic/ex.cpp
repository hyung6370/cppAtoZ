#include <iostream>
using namespace std;

int main() {
    int n;
    string word;

    cin >> word >> n;
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < n; j++) {
            cout << word[i];
        }
    }
}