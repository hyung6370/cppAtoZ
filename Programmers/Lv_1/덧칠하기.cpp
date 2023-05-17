#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int cnt = 0; 
    int current = 0;

    for (int i = 0; i < section.size(); i++) {
        if (current > section[i]) continue;
        cnt++;
        current = section[i] + m;
    }
    answer = cnt;
    return answer;
}

int solution2(int n, int m, vector<int> section) {
    int answer = 1;

    int pivot = section[0];
    for (const auto v: section) {
        if (v < pivot + m) continue;
        else {
            pivot = v;
            answer++;
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, num, data;
    vector<int> section;
    cin >> n >> m;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> data;
        section.push_back(data);
    }

    cout << solution(n, m, section);

    return 0;
}