#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int a, b, c;

    cin >> a >> b;
    cin >> c;

    int htom = a * 60 + b;
    htom += c;

    int hour = (htom / 60) % 24;
    int minute = htom % 60;

    cout << hour << " " << minute << endl;

    return 0;
}