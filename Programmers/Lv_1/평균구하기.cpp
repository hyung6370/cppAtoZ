#include <iostream>
#include <string>
#include <vector>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

    for (int i = 0; i < arr.size(); i++) {
        answer += arr[i];
    }

    answer /= arr.size();

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> arr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        arr.push_back(data);
    }

    cout << solution(arr);

    return 0;
}