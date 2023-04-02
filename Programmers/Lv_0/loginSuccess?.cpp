#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

// map<string, string> m;

// string solution(vector<string> id_pw, vector<vector<string>> db) {
//     string answer = "";

//     for (int i = 0; i < db.size(); i++) {
//         m[db[i][0]] = db[i][1];
//     }

//     for (int i = 0l i < m.size(); i++) {
//         if (m.find(id_pw[0]) != m.end()) {
//             if (m[id_pw[0]] == id_pw[1]) {
//                 answer = "login";
//                 break;
//             }
//             else if (m[id_pw[0]] != id_pw[1]) {
//                 answer = "wrong pw";
//                 break;
//             }
//         }
        
//         else answer = "fail";
//     }

//     return answer;
// }

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";

    for (int i = 0; i < db.size(); i++) {
        if (id_pw[0] == db[i][0] && id_pw[1] == db[i][1]) {
            answer = "login";
            break;
        }
        else {
            if (id_pw[0] == db[i][0] && id_pw[1] != db[i][1]) { 
                answer = "wrong pw";
                break;
            }
            else answer = "fail";
        }
    }

    return answer;
}

// map을 사용하면 더 간결하게 코드를 짤 수 있는 것 같다.
// map을 사용하면 find 함수를 쓸 수 있어서 2차원 벡터를 사용할 때 편리할 듯?

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string id, pw;
    vector<string> id_pw;
    vector<string> id_pw2;
    vector<vector<string>> db;

    cin >> id >> pw;
    id_pw.push_back(id);
    id_pw.push_back(pw);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> id >> pw;
        id_pw2.push_back(id);
        id_pw2.push_back(pw);
        db.push_back(id_pw2);
        id_pw2.clear();
    }
    // cout << '\n';
    // for (int i = 0; i < num; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << (*(db.begin() + i))[j] << '\n';
    //     }
    // }

    cout << solution(id_pw, db);
    // cout << '\n';
    // cout << id_pw[0] << " " << id_pw[1] << '\n';
    // cout << '\n';
    // cout << db[0][0] << " " << db[0][1] << '\n';
    // cout << db[1][0] << " " << db[1][1] << '\n';
    // cout << db[2][0] << " " << db[2][1] << '\n';


    return 0;
}