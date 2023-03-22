#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int first, second;

    sort(sides.begin(), sides.end());

    first = sides[0];
    second = sides[1];

    for (int i = second-first+1; i <= second; i++) answer++;
    for (int i = second+1; i < second+first; i++) answer++;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, side;
    vector<int> sides;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> side;
        sides.push_back(side);
    }

    cout << solution(sides);

    return 0;
}