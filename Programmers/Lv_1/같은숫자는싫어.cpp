#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (answer.size() == 0 || answer[answer.size()-1] != arr[i]) answer.push_back(arr[i]);
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