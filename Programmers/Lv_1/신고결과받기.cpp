#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    map<string, int> id_index;
    map<string, set<string>> id_id;

    for (int i = 0; i < id_list.size(); i++) {
        id_index[id_list[i]] = i;
    }

    for (auto entry : report) {
        stringstream ss(entry);
        string fromId;
        string toId;
        ss >> fromId >> toId;
        id_id[toId].insert(fromId);
    }

    for (auto iter: id_id) {
        if (iter.second.size() >= k) {
            for (auto in_iter : iter.second) {
                answer[id_index[in_iter]]++;
            }
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int idN, reportN, k;
    string data;
    vector<int> result;
    vector<string> id_list, report;
    cin >> idN;
    for (int i = 0; i < idN; i++) {
        cin >> data;
        id_list.push_back(data);
    }
    cin >> reportN;
    for (int i = 0; i < reportN; i++) {
        getline(cin, data, '!');
        report.push_back(data);
    }

    cin >> k;

    result = solution(id_list, report, k);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}