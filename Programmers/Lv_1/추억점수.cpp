#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;

    for (int i = 0; i < name.size(); i++) {
        m.insert({name[i], yearning[i]});
    }
    
    // for (auto iter = m.begin(); iter != m.end(); iter++) {
    //     cout << iter->first << ", " << iter->second << '\n';
    // }

    for (int i = 0; i < photo.size(); i++) {
        int sum = 0;
        for (int j = 0; j < photo[i].size(); j++) {
            if (m.find(photo[i][j]) != m.end()) {
                auto it = m.find(photo[i][j]);
                sum += it->second;
            }
            else continue;
        }
        answer.push_back(sum);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, photoN;
    string nameData;
    int yearningData;
    vector<string> name;
    vector<int> yearning, result;

    vector<string> v;
    vector<vector<string>> photo;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nameData;
        name.push_back(nameData);
    }

    for (int i = 0; i < n; i++) {
        cin >> yearningData;
        yearning.push_back(yearningData);
    }

    cin >> photoN;
    for (int i = 0; i < photoN; i++) {
        for (int j = 0; j < n; j++) {
            cin >> nameData;
            v.push_back(nameData);
        }
        photo.push_back(v);
        v.clear();
    }

    result = solution(name, yearning, photo);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    // for (int i = 0; i < photoN; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << (*(photo.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }


    return 0;
}