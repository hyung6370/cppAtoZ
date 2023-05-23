#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;

    stack<int> stack;
    for (int i = 0; i < moves.size(); i++) {
        int check = moves[i] - 1;
        for (int j = 0; j < board.size(); j++) {
            if (board[j][check] != 0) {
                if (!stack.empty() && stack.top() == board[j][check]) {
                    stack.pop();
                    answer += 2;
                }
                else stack.push(board[j][check]);
                
                board[j][check] = 0;
                break;
            }
            
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, data;
    vector<int> v, moves, result;
    vector<vector<int>> board;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> data;
            v.push_back(data);
        }
        board.push_back(v);
        v.clear();
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        moves.push_back(data);
    }

    cout << solution(board, moves);

    return 0;
}