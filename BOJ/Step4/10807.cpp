#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int num;
    int e_num;
    int f_num;
    int count = 0;
    int* arr = 0;

    cin >> num;
    arr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++) {
        cin >> e_num;
        arr[i] = e_num;
    }
    cin >> f_num;
    for (int i = 0; i < num; i++) {
        if (arr[i] == f_num) {
            count += 1;
        }
    }
    cout << count << endl;

    free(arr);
    return 0;
}