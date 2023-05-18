#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                i--; j--;
            }
        }
    }
    
    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i]+1 == reserve[j] || lost[i]-1 == reserve[j])
            {
                lost.erase(lost.begin()+i);
                reserve.erase(reserve.begin()+j);
                i--; j--;
                break;
            }
        }

    }
    
    answer = n-lost.size();
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, lostN, reserveN, data;
    vector<int> lost, reserve;
    cin >> n >> lostN;
    for (int i = 0; i < lostN; i++) {
        cin >> data;
        lost.push_back(data);
    }
    cin >> reserveN;
    for (int i = 0; i < reserveN; i++) {
        cin >> data;
        reserve.push_back(data);
    }

    cout << solution(n, lost, reserve);

    return 0;
}