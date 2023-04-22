#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[200];

int solution(vector<vector<int>> lines) {
    int answer = 0;

    for (int i = 0; i < lines.size(); i++) {
        for (int j = lines[i][0]; j < lines[i][1]; j++) {
            arr[j+100]++;
        }
    }

    for (int i = 0; i < 200; i++) {
        if (arr[i] >= 2) answer++;
        // cout << arr[i] << " ";
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int data;
    vector<int> v;
    vector<vector<int>> lines;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> data;
            v.push_back(data);
        }
        lines.push_back(v);
        v.clear();
    }

    // cout << '\n';
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << (*(lines.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << solution(lines);
    
    return 0;
}