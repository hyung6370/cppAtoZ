#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int list_length, value, n;
    vector<int> num_list, result;
    cin >> list_length;
    for (int i = 0; i < list_length; i++) {
        cin >> value;
        num_list.push_back(value);
    }

    cin >> n;
    

    while (num_list.size() > 0) {
        result.push_back(0);
        for (int i = 0; i < n; i++) {
            result.push_back(num_list[0]);
            num_list.erase(num_list.begin());
        }
        result.push_back(0);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }


    return 0;
}