#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    if (sides[sides.size()-1] < sides[sides.size()-2] + sides[sides.size()-3]) answer = 1;
    else answer = 2;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, side;
    vector<int> sides;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> side;
        sides.push_back(side);
    }

    cout << solution(sides);

    return 0;
}