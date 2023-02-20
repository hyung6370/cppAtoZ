#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;

    answer = (box[0] / n) * (box[1] / n) * (box[2] / n);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, length;
    vector<int> box;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> length;
        box.push_back(length);
    }

    cout << solution(box, n);

    return 0;
}