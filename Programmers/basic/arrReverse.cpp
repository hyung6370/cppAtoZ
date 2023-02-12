#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for (int i = 0; i < num_list.size(); i++) {
        answer.push_back(num_list[num_list.size()-i-1]);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num;
    cin >> n;

    vector<int> num_list;
    for (int i = 0; i < n; i++) {
        cin >> num;
        num_list.push_back(num);
    }

    for (int i = 0; i < solution(num_list).size(); i++) {
        cout << solution(num_list)[i] << " ";
    }

    return 0;
}