#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int solution(vector<int> array) {
//     int answer = 0;

//     return answer;
// }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, value;
    cin >> num;
    vector<int> array;
    for (int i = 0; i < num; i++) {
        cin >> value;
        array.push_back(value);
    }
    sort(array.begin(), array.end());

    cout << array[array.size() / 2];

    return 0;
}