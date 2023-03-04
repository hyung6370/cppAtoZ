#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> array;
    vector<string>::iterator it;
    int n, value;
    int count = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        array.push_back(to_string(value));
    }

    for (int i = 0; i < array.size(); i++) {
        it = find(array.begin(), array.end(), '7');
        if (it == array.end()) count++;
    }

    // cout << solution(array);

    return 0;
}