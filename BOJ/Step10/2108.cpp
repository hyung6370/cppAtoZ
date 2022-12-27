#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[8001];

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int sum = 0;
    int index = 0;
    int max = 0;
    vector<int> list;
    for (int i = 0; i < N; i++) {
        int score;
        cin >> score;
        sum += score;

        if (score <= 0) {
            index = -score;
        }
        else index = 4000 + score;

        arr[index]++;

        if (arr[index] > max) {
            max = arr[index];
        }

        list.push_back(score);
    }

    int avg = round(double(sum) / N);
    cout << avg << endl;

    sort(list.begin(), list.end());
    cout << list[list.size()/2] << endl;

    bool flag = false;
    int result = 0;
    for (int i = -4000; i < 4001; i++) {
        if (i <= 0) index = -i;
        else index = 4000 + i;
        if (arr[index] == max) {
            result = i;
            if (flag) break;
            flag = true;
        }
    }
    cout << result << endl;
    cout << list[list.size()-1] - list[0];
}