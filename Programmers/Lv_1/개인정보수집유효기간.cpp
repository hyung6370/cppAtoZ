#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

// 날짜 비교 문제가 나올 경우에는 무조건 '일' 단위로 치환하여 계산하자!

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int year, month, day, total;
    map<char, int> t_map;
    vector<int> priv;

    // 날짜 계산
    year = stoi(today.substr(0, 4));
    month = stoi(today.substr(5, 2));
    day = stoi(today.substr(8, 2));
    total = year*12*28 + (month-1)*28 + day;

    // 약관 자르기
    for (int i = 0; i < terms.size(); i++) {
        stringstream ss(terms[i]);
        char alphabet;
        int month;
        ss >> alphabet >> month;
        t_map[alphabet] = month;
    }
    
    // 프라이버스 날짜 계산
    for (int i = 0; i < privacies.size(); i++) {
        int y = stoi(privacies[i].substr(0, 4));
        int m = stoi(privacies[i].substr(5, 2));
        int d = stoi(privacies[i].substr(8, 2));
        char a = privacies[i].back();

        int temp = y*12*28 + (m-1)*28 + d + (t_map[a]*28-1);

        priv.push_back(temp);
    }

    for (int i = 0; i < priv.size(); i++) {
        if (priv[i] < total) {
            answer.push_back(i+1);
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string today;
    cin >> today;

    string data;
    vector<int> result;
    vector<string> terms;
    vector<string> privacies;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        getline(cin, data, '!');
        terms.push_back(data);
    }

    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        getline(cin, data, '!');
        privacies.push_back(data);
    }

    result = solution(today, terms, privacies);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}