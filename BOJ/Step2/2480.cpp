#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int dice;
    int prize_money;
    int max_dice;
    int* arr = 0;
    arr = (int*)malloc(sizeof(int) * 3);
    
    for (int i = 0; i < 3; i++) {
        cin >> dice;
        arr[i] = dice;
    }

    if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]) {
        max_dice = arr[0];
        for (int i = 0; i < 3; i++) {
            if (max_dice < arr[i]) {
                max_dice = arr[i];
            }
        }
        prize_money = max_dice * 100;
        cout << prize_money << endl;
    }
    
    else {
        if (arr[0] == arr[1] && arr[0] == arr[2]) {
            prize_money = 10000 + arr[0] * 1000;
            cout << prize_money << endl;
        }
        else {
            if (arr[0] == arr[1] || arr[0] == arr[2]) {
                prize_money = 1000 + arr[0] * 100;
                cout << prize_money << endl;
            }
            else {
                prize_money = 1000 + arr[1] * 100;
                cout << prize_money << endl;
            }
        }
    }

    free(arr);
    return 0;
}