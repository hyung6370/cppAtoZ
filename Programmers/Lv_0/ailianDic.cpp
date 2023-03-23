#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;

    for (int i = 0; i < dic.size(); i++) {
        map<char, int> m;
        int cnt = 0;

        for (int j = 0; j < dic[i].size(); j++) {
            m[dic[i][j]]++;
        }

        if (m.size() == spell.size()) {
            for (int j = 0; j < spell.size(); j++) {
                if (m[spell[j][0]] == 1) cnt++;
            }
        }

        if (cnt == spell.size()) return 1;
        
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int spellN, dicN;
    string spellValue, dicValue;
    vector<string> spell, dic;
    cin >> spellN;
    for (int i = 0; i < spellN; i++) {
        cin >> spellValue;
        spell.push_back(spellValue);
    }
    cin >> dicN;
    for (int i = 0; i < dicN; i++) {
        cin >> dicValue;
        dic.push_back(dicValue);
    }

    cout << solution(spell, dic);

    return 0;
}