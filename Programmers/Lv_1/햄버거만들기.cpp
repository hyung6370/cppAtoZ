#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string str = "";

    for (auto x : ingredient) {
        char c = x + '0';
        str += c;
    }

    int pos = 0;

    while (1) {
        size_t ret = str.find("1231", pos);

        if (ret == string::npos) break;
        else str.erase(ret, 4);

        if (ret > 2) pos = ret-3;

        answer++;
    }

    return answer;
}

int solution2(vector<int> ingredient) {
    int answer = 0;

    vector<int> v = { -1 };
    
    for (int x : ingredient) {
        if (v.back() == 1 && x == 2) v.back() = 12;
        else if (v.back() == 12 && x == 3) v.back() = 123;
        else if (v.back() == 123 && x == 1) answer++, v.pop_back();
        else v.push_back(x);
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> ingredient;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        ingredient.push_back(data);
    }

    cout << solution(ingredient);

    return 0;
}