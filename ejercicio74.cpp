#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    int P[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    P[0] = A[0];

    for (int i = 1; i < N; i++) {
        P[i] = P[i - 1] + A[i];
    }

    int Q;
    cin >> Q;

    for (int q = 0; q < Q; q++) {

        int L, R;
        cin >> L >> R;

        int suma;

        if (L == 0) {
            suma = P[R];
        } else {
            suma = P[R] - P[L - 1];
        }

        cout << suma;

        if (q < Q - 1) {
            cout << "; ";
        }
    }

    cout << endl;

    return 0;
}