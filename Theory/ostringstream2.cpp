#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str = "123abc";

    // get()
    stringstream ss1;
    ss1.str(str);
    
    cout << ss1.get()-'0';  // 1
    cout << ss1.get()-'0';  // 2


    // unget()
    stringstream ss2;
    ss2.str(str);

    char ch;
    ss2 >> ch;  // 1
    ss2 >> ch;  // 2
    ss2.unget();
    ss2 >> ch;  // 1

    return 0;
}

int main() {
    string str = "gkg|qiew|789", token;
    stringstream ss(str);

    while (getline(ss, token, '|')) {
        cout << token << '\n';
    }
}