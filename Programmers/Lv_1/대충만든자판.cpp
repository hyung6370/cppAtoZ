#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<int> v;

    for (int i = 0; i < targets.size(); i++) {
        int count = 0;
        for (int j = 0; j < targets[i].size(); j++) {
            bool found = false;
            for (int k = 0; k < keymap.size(); k++) {
                auto it = find(keymap[k].begin(), keymap[k].end(), targets[i][j]);
                if (it != keymap[k].end()) {
                    v.push_back(it - keymap[k].begin());
                    found = true;
                    continue;
                }
            }
            if (!found) {
                count = -1;
                break;
            }
            count += *min_element(v.begin(), v.end())+1;
            v.clear();
        }
        answer.push_back(count);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string data;
    vector<int> result;
    vector<string> keymap, targets;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        keymap.push_back(data);
    }

    for (int i = 0; i < n; i++) {
        cin >> data;
        targets.push_back(data);
    }

    result = solution(keymap, targets);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}