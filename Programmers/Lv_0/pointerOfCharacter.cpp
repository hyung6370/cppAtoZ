#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;

    int x = 0, y = 0;
    int x_border, minus_x_border, y_border, minus_y_border;
    x_border = board[0] / 2;
    minus_x_border = -x_border;
    y_border = board[1] / 2;
    minus_y_border = -y_border;
    
    for (int i = 0; i < keyinput.size(); i++) {
        cout << i << ": " << keyinput[i] << '\n';
        if (keyinput[i] == "left") {
            x -= 1;
            cout << "x : " << x << " ";
        }
        else if (keyinput[i] == "right") {
            x += 1;
            cout << "x : " << x << " ";
        }
        else if (keyinput[i] == "up") {
            y += 1;
            cout << "y : " << y << " ";
        }
        else if (keyinput[i] == "down") {
            y -= 1;
            cout << "y : " << y << " ";
        }
        if (x == x_border || x == minus_x_border) break;
        if (y == y_border || y == minus_y_border) break;
        // cout << "x : " << x << ", y : " << y << '\n';
    }
    cout << '\n';

    answer.push_back(x);
    answer.push_back(y);

    return answer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> keyinput;
    vector<int> board;
    vector<int> result;

    int keyinputN, boardN, boardValue;
    string keyinputValue;

    cin >> keyinputN;
    for (int i = 0; i < keyinputN; i++) {
        cin >> keyinputValue;
        keyinput.push_back(keyinputValue);
    }

    cin >> boardN;
    for (int i = 0; i < boardN; i++) {
        cin >> boardValue;
        board.push_back(boardValue);
    }

    result = solution(keyinput, board);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ", ";
    }


    return 0;
}