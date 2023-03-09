#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    vector<int> answer;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= '0' && word[i] <= '9') {
            answer.push_back(word[i]);
        }
    }
    sort(answer.begin(), answer.end());
    
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i]-48 << " ";
    }

    return 0;
}