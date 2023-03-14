#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp = "";

    int count = n;
    for (int i = 0; i < my_str.size(); i++) {
        if (count == 0) {
            answer.push_back(temp);
            temp = "";
            count = n;
        }
        temp += my_str[i];
        if (i == my_str.size()-1) {
            answer.push_back(temp);
        }
        count--;
        
        // cout << "i : " << i << ", temp : " << temp << ", count : " << count << ", " << my_str.size() << '\n';
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> answer;
    string my_str;
    int n;
    cin >> my_str >> n;

    answer = solution(my_str, n);

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << '\n';
    }

    return 0;
}