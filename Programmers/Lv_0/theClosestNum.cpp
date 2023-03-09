#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;

    vector<pair<int, int>> v;

    for (int i = 0; i < array.size(); i++) {
        v.push_back(make_pair(abs(array[i]-n), array[i]));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << "1: " << v[i].first << ", 2: " << v[i].second << '\n';
    }
    answer = v[0].second;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int arr_length, value, n;
    vector<int> array;
    cin >> arr_length;
    for (int i = 0; i < arr_length; i++) {
        cin >> value;
        array.push_back(value);
    }

    cin >> n;
    cout << solution(array, n);

    return 0;
}