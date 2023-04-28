#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> v;

    for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr1[0].size(); j++) {
            v.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(v);
        v.clear();
    }

    return answer;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> v;
    vector<vector<int>> arr1, arr2, result;

    cin >> n;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data;
            v.push_back(data);
        }
        arr1.push_back(v);
        v.clear();
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data;
            v.push_back(data);
        }
        arr2.push_back(v);
        v.clear();
    }

    result = solution(arr1, arr2);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << (*(result.begin() + i))[j] << ' ';
        }
        cout << '\n';
    }

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << (*(arr1.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << (*(arr2.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }
    

    return 0;
}