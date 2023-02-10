#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> strlist;
    int num;
    string word;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> word;
        strlist.push_back(word);
    }

    for (int i = 0; i < strlist.size(); i++) {
        cout << strlist[i].size() << '\n';
    }

    return 0;
}