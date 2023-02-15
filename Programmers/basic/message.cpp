#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string message;
    getline(cin, message);

    cout << message.length()*2;
}