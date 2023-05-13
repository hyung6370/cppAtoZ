#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0; 

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            for (int k = j+1; k < nums.size(); k++) {
                if (isPrime(nums[i]+nums[j]+nums[k])) answer++;
            }
        }
    }
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