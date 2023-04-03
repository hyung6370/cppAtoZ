#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_QUEUE 101
#define ARR_SIZE 20
using namespace std;

template <typename T>
class Queue {
    public:
        T arr[MAX_QUEUE];
        int f = 0, r = 0;

        T front() { return arr[f]; }
        bool isEmpty() { return (f == r); }
        bool isFull() { return ((r + 1) % MAX_QUEUE == f); }
        int size() { return (f > r ? f-r : r-f); }
        void enqueue(T element) {
            arr[r++] = element;
            r %= MAX_QUEUE;
        }
        void dequeue() { f = (f + 1) % MAX_QUEUE; }
};

int get_digit(int n, int digit) {
    int div = 1;
    for (int i = 0; i < digit; i++) {
        div *= 10;
    }
    n /= div;

    return (n % 10);
}

void radix_sort(int *arr, int size) {
    Queue<int> q[10];

    int maxNum = 0, maxDigits = 0;
    for (int i = 0; i < size; i++) {
        if (maxNum < arr[i]) maxNum = arr[i];
    }

    while (maxNum != 0) {
        maxDigits++;
        maxNum /= 10;
    }

    for (int i = 1; i <= maxDigits; i++) {
        for (int j = 0; j < size; j++) {
            q[get_digit(arr[j], i)].enqueue(arr[j]);
        }
        int arrIdx = 0;
        for (int j = 0; j < 10; j++) {
            while (!q[j].isEmpty()) {
                arr[arrIdx++] = q[j].front();
                q[j].dequeue();
            }
        }
    }
}

int main() {
    int arr[ARR_SIZE];

    srand(time(NULL));
    for (int i = 0; i < ARR_SIZE; i++) {
        arr[i] = (rand() % 100000) + 1;
    }

    cout << "Before Radix Sort\n";
    for (int i = 0; i < ARR_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    radix_sort(arr, ARR_SIZE);

    cout << "After Radix Sort\n";
    for (int i = 0; i < ARR_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';

    return 0;
}
