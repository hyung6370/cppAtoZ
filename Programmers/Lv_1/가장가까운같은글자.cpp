#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    unordered_map<char, int> umap;
    // unordered_map을 사용한 이유는 key가 작을 떄 검색에 조금 더 빠르기 때문

    for (int i = 0; i < s.size(); i++) {

        // key가 존재한다면, 현재 인덱스와 저장된 인덱스의 차이만큼 result에 저장 후,
        // value에 현재 인덱스를 저장
        if (umap.find(s[i]) != umap.end()) { 
            int index = umap[s[i]];
            answer.push_back(i-index);
            umap[s[i]] = i;
        }

        // key가 존재하지 않으면 저장, result는 -1
        else {
            umap[s[i]] = i;
            answer.push_back(-1);
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<int> result;
    cin >> s;
    
    result = solution(s);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}