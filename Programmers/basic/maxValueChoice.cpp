#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    // for (int i = 0; i < numbers.size(); i++) {
    //     cout << numbers[i] << " ";
    // }
    // cout << '\n';
    // cout << "1. " << numbers[numbers.size()-1] << ", 2. " << numbers[numbers.size()-2] << "\n";
    // cout << "1. " << numbers[0] << ", 2. " << numbers[1] << "\n";
    
    if ((numbers[numbers.size()-1] * numbers[numbers.size()-2]) > (numbers[0] * numbers[1])) {
        answer = numbers[numbers.size()-1] * numbers[numbers.size()-2];
    }
    else answer = numbers[0] * numbers[1];
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, number;
    vector<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    cout << solution(numbers);

    return 0;
}