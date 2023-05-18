#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    vector<int> v;
    
    for (int i = 0; i < N+1; i++) {
        if (road[i][0] == 1 && road[i][2] < K+1) {
            
            answer++;
            
            if (road[road[i][1]][2] + road[i][2] < K+1) answer++;
            
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K, data;
    vector<int> v;
    vector<vector<int>> road;
    cin >> N;

    for (int i = 0; i < N+1; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> data;
            v.push_back(data);
        }
        road.push_back(v);
        v.clear();
    }

    cin >> K;

    cout << solution(N, road, K);


    return 0;
}