#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) answer.push_back(arr[i]);
    }
    if (answer.size() == 0) answer.push_back(-1);
    
    sort(answer.begin(), answer.end());

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data, divisor;
    vector<int> arr, result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        arr.push_back(data);
    }
    cin >> divisor;

    result = solution(arr, divisor);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

}