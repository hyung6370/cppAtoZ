#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution (vector<int> numbers, int k) {

    // int answer = 1;

    // for (int i = 0; i < k-1; i++) {
    //     answer += 2;
    //     if (answer > numbers.size()-1) {
    //         answer -= numbers.size();
    //     }
    // }

    return ((k-1) * 2) % numbers.size()+1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, value, k;
    vector<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    cin >> k;

    // cout << numbers.size() << " " << numbers.size()-1 << " " << numbers.size()-2 << '\n';

    cout << solution(numbers, k);

    return 0;
}