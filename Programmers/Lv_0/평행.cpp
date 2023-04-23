#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;

    double incli_aX = 0;
    double incli_aY = 0;
    double incli_bX = 0;
    double incli_bY = 0;

    incli_aX = dots[0][0] - dots[1][0];
    incli_aY = dots[0][1] - dots[1][1];
    incli_bX = dots[2][0] - dots[3][0];
    incli_bY = dots[2][1] - dots[3][1];
    if (incli_aX/incli_aY == incli_bX/incli_bY) return answer = 1;
    
    incli_aX = dots[0][0] - dots[2][0];
    incli_aY = dots[0][1] - dots[2][1];
    incli_bX = dots[1][0] - dots[3][0];
    incli_bY = dots[1][1] - dots[3][1];
    if (incli_aX/incli_aY == incli_bX/incli_bY) return answer = 1;

    incli_aX = dots[0][0] - dots[3][0];
    incli_aY = dots[0][1] - dots[3][1];
    incli_bX = dots[1][0] - dots[2][0];
    incli_bY = dots[1][1] - dots[2][1];
    if (incli_aX/incli_aY == incli_bX/incli_bY) return answer = 1;

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int data;
    vector<int> v;
    vector<vector<int>> dots;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> data;
            v.push_back(data);
        }
        dots.push_back(v);
        v.clear();
    }

    cout << solution(dots);

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << (*(dots.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }

    return 0;
}