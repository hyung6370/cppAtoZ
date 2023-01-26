#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pair<int, int> len[12];

    int count;
    int direction;
    int distance;
    int big_area;
    int small_area;

    cin >> count;
    for (int i = 0; i < 6; i++) {
        cin >> direction >> distance;
        len[i] = len[i+6] = {direction, distance};
    }

    for (int i = 3; i < 12; i++) {
        if (len[i].first == len[i-2].first
            && len[i-1].first == len[i-3].first) {
                big_area = len[i+1].second * len[i+2].second;
                small_area = len[i-1].second * len[i-2].second;
                break;
            } 
    }
    cout << count * (big_area - small_area);

    return 0;
}