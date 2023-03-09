#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < to_string(array[i]).size(); j++) {
            if (to_string(array[i])[j] == '7') answer++;
        }
    }    

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> array;
    int n, value;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        array.push_back(value);
    }

    cout << solution(array);

    return 0;
}