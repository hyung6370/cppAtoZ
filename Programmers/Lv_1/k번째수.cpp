#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> pre_answer;

    for (int i = 0; i < commands.size(); i++) {
        for (int j = commands[i][0]; j <=commands[i][1]; j++) {
            pre_answer.push_back(array[j-1]);
        }
        sort(pre_answer.begin(), pre_answer.end());
        if (pre_answer.size() < commands[i][2]) answer.push_back(pre_answer[pre_answer.size()-1]);
        else answer.push_back(pre_answer[commands[i][2]-1]);
        pre_answer.clear();
    }

    return answer; 
}

vector<int> solution2(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for (int i = 0; i < commands.size(); i++) {
        temp = array;
        sort(temp.begin()+commands[i][0]-1, temp.begin()+commands[i][1]);
        answer.push_back(temp[commands[i][0] + commands[i][2] -2]);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int data;
    vector<int> array, v, result;
    vector<vector<int>> commands;

    for (int i = 0; i < 7; i++) {
        cin >> data;
        array.push_back(data);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> data;
            v.push_back(data);
        }
        commands.push_back(v);
        v.clear();
    }

    result = solution(array, commands);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    // cout << '\n';
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << (*(commands.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }

    return 0;
}