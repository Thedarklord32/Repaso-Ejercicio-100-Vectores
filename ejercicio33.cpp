#include <iostream>
using namespace std;

int main() {
    int N, P, X;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> X;
    cin >> P;

    if (P >= 0 && P <= N && N < 100) {

        for (int i = N; i > P; i--) {
            A[i] = A[i - 1];
        }

        A[P] = X;
        N++;

    } else {
        cout << "Posicion invalida" << endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}