#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer, tmp;
    tmp = arr;
    if (arr.size() == 1) answer.push_back(-1);
    else {
        sort(tmp.begin(), tmp.end());

        int minData = tmp[0];

        // cout << find(arr.begin(), arr.end(), minData) - arr.begin() << '\n';
        arr.erase(arr.begin() + (find(arr.begin(), arr.end(), minData) - arr.begin()));
        
        answer = arr;
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> arr, result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        arr.push_back(data);
    }

    result = solution(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}