#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, n;
    vector<int> array;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        array.push_back(num);
    }

    int maxNum = 0;
    for (int i = 0; i < array.size()-1; i++) {
        // maxNum = array[i];
        if (array[i+1] > array[i]) maxNum = array[i+1];
        else if (array[i+1] < array[i]) maxNum = array[i];
    }
    cout << maxNum;
    // cout << maxNum;
    // for (int i = 0; i < array.size(); i++) {
    //     cout << array[i] << " ";
    // }

    
    return 0;
}