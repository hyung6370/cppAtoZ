#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    int rank = 1;
    pair<int, int> arr[50];
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
                rank++;
            }
        }
        cout << rank << ' ';
        rank = 1;
    }

    return 0;
}