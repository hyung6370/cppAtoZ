#include <iostream>
#include <vector>
#include <algorithm>

#include <unordered_map>
#include <unordered_set>
// #include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int total = nums.size();
    sort(nums.begin(), nums.end());

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    for (int i = 0; i < nums.size(); i++) { 
        if ((total/2) == answer) break;
        answer++;
    }

    return answer;
}

int solution2(vector<int> nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    return min(nums.size()/2, s.size());
}

int solution3(vector<int> nums) {
    unordered_map<int, int> hash;

    for (auto num: nums) {
        hash[num] += 1;
    }

    return min(hash.size(), nums.size()/2);
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