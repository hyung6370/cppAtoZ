#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string to_binary(int size, int n) {
    string result = "";
    while (n > 0) {
        result += to_string(n % 2);
        n /= 2;
    }
    while (result.size() < size) {
        result += "0";
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string s;
    vector<string> s_arr1, s_arr2;

    for (int i = 0; i < n; i++) {
        s_arr1.push_back(to_binary(n, arr1[i]));
        s_arr2.push_back(to_binary(n, arr2[i]));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s_arr1[i][j] == '1' || s_arr2[i][j] == '1') s += "#";
            else s += " ";
        }
        answer.push_back(s);
        s = "";
    }

    return answer;
}

vector<string> best_solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for (int i = 0; i < n; i++) {
        arr1[i] = arr1[i] | arr2[i];
        string ans = "";

        for (int j = 0; j < n; j++) {
            if (arr1[i] % 2 == 0) ans = " " + ans;
            else ans = "#" + ans;
            
            arr1[i] = arr1[i] >> 1;
        }
        answer.push_back(ans);
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> arr1, arr2;
    vector<string> result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        arr1.push_back(data);
    }
    for (int i = 0; i < n; i++) {
        cin >> data;
        arr2.push_back(data);
    }

    result = solution(n, arr1, arr2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }

    return 0;
}