#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;

    for (int i = 0; i < a.size(); i++) {
        answer += (a[i] * b[i]);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        a.push_back(data);
    }
    for (int i = 0; i < n; i++) {
        cin >> data;
        b.push_back(data);
    }

    cout << solution(a, b);


    return 0;
}