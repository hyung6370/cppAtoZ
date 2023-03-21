#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int num;
    // string str = "4 + 2";
    // stringstream stream;
    // stream.str(str); // 초기화 -> stream에 str을 대입

    // while(stream >> num) {
    //     cout << num << '\n';
    // }

    string s;
    string str = "4 + 21";
    stringstream stream(str);  // 초기화 -> stream에 str을 대입

    while(stream >> s) {
        cout << s << '\n';
    }

    return 0;
}