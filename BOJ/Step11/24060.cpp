#include <iostream>
using namespace std;

int inputCnt = 0;

void merge(int* A, int p, int q, int r, int K) {
    int tmp[r + 2]; 
    int i = p;
    int j = q + 1;
    int t = 1;

    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else
            tmp[t++] = A[j++];
    }

    while (i <= q)
        tmp[t++] = A[i++];
    
    while (j <= r)
        tmp[t++] = A[j++];
    
    i = p;
    t = 1;

    while (i <= r) {
        A[i++] = tmp[t++];
        if (++inputCnt == K)
            cout << tmp[t-1];
    }

}

void merge_sort(int* A, int start, int end, int K) {
    int p = start;
    int r = end;
    int q;

    if (p < r) {
        q = (p + r) / 2;
        merge_sort(A, p, q, K);
        merge_sort(A, q+1, r, K);
        merge(A, p, q, r, K);
    }
}

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    int* A;
    A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    merge_sort(A, 0, N-1, K);
    if (inputCnt < K)
        cout << -1;

    free(A);

    return 0;
}