#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution (vector<vector<int>> dots) {
    int answer = 0;

    int x = dots[0][0];
    int y = dots[0][1];
    bool bx = false, by = false;

    for (int i = 1; i < dots.size(); i++) {
        if (x != dots[i][0] && !bx) {
            x = abs(x - dots[i][0]);
            bx = true;
        }

        if (y != dots[i][1] && !by) {
            y = abs(y - dots[i][1]);
            by = true;
        }
    }

    answer = x * y;

    return answer;
}

int solution2 (vector<vector<int>> dots) {
    int answer = 0;

    int x1 = min(min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]));
    int y1 = min(min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]));
    int x2 = min(min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]));
    int y2 = min(min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]));

    answer = (x2 - x1) * (y2 - y1);

    return answer;
}

int solution3 (vector<vector<int>> dots) {
    int answer = 0;

    sort(dots.begin(), dots.end());

    answer = (dots[3][0] - dots[0][0]) * (dots[3][1] - dots[0][1]);

    return answer;
}
