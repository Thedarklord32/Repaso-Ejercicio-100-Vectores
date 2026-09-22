#include <iostream>
using namespace std;

int main() {
    int N, K;
    int A[100];

    cin >> N;
    cin >> K;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    K = K % N;

    int B[100];

    for (int i = 0; i < N; i++) {
        B[(i - K + N) % N] = A[i];
    }

    for (int i = 0; i < N; i++) {
        A[i] = B[i];
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}