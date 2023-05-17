#include <iostream>
#include <string>
#include <vector>
using namespace std;

int rankNum(int n) {
    switch (n) {
    case 6:
        return 1;
    case 5:
        return 2;
    case 4:
        return 3;
    case 3:
        return 4;
    case 2:
        return 5;
    default:
        return 6;
    }
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correctCnt = 0;
    int zeroCnt = 0;
    int highRank = 0, lowRank = 0;

    for (int i = 0; i < 6; i++) {
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) correctCnt++;
        if (lottos[i] == 0) zeroCnt++;
    }
    highRank = rankNum(correctCnt + zeroCnt);
    lowRank = rankNum(correctCnt);

    answer.push_back(highRank);
    answer.push_back(lowRank);
    
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int data;
    vector<int> lottos, win_nums, result;

    for (int i = 0; i < 6; i++) {
        cin >> data;
        lottos.push_back(data);
    }

    for (int i = 0; i < 6; i++) {
        cin >> data;
        win_nums.push_back(data);
    }

    result = solution(lottos, win_nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}