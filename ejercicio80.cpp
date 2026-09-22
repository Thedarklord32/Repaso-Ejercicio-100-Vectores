#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    int P[100];
    int B[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    for (int i = 0; i < N; i++) {
        B[i] = A[P[i]];
    }

    cout << "B: ";

    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }

    cout << endl;

    return 0;
}