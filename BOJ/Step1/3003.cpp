#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int king, queen, look, beshop, night, pawn;

    cin >> king >> queen >> look >> beshop >> night >> pawn;

    king = 1 - king;
    queen = 1 - queen;
    look = 2 - look;
    beshop = 2 - beshop;
    night = 2 - night;
    pawn = 8 - pawn;

    cout << king << " " << queen << " " << look << " " << beshop << " " << night << " " << pawn << endl;

    return 0;
}