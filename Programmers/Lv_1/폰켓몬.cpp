#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> nums;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        nums.push_back(data);
    }

    cout << solution(nums);

    return 0;
}