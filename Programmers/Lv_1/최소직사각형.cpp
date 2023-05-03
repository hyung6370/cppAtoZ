#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int height = 0, width = 0;

    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] > sizes[i][1]) {
            height = max(height, sizes[i][0]);
            width = max(width, sizes[i][1]);
        }
        else {
            height = max(height, sizes[i][1]);
            width = max(width, sizes[i][0]);
        }
    }
    answer = height * width;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int data;
    vector<int> v;
    vector<vector<int>> sizes;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> data;
            v.push_back(data);
        }
        sizes.push_back(v);
        v.clear();
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << (*(sizes.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << solution(sizes);

    return 0;
}