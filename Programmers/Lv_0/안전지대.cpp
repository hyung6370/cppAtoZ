#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int solution(vector<vector<int>> board) {
    int answer = 0;

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j] == 1) {
                for (int k = 0; k < 8; k++) {
                    if (i+dx[k] >= 0 && i+dx[k] < board.size() && j+dy[k] >= 0 && j+dy[k] < board.size()) {
                        if (board[i+dx[k]][j+dy[k]] != 1) {
                            board[i+dx[k]][j+dy[k]] = 2;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[i][j] == 0) answer++;
        }
    }

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int data;
    vector<int> v;
    vector<vector<int>> board;

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> data;
            v.push_back(data);
        }
        board.push_back(v);
        v.clear();
    }

    cout << solution(board);

    // cout << '\n';
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << (*(board.begin() + i))[j] << ' ';
    //     }
    //     cout << '\n';
    // }


    return 0;
}