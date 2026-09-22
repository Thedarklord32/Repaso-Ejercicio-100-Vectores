#include <iostream>
using namespace std;

int main() {
    int N, P;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> P;

    if (P >= 0 && P < N) {

        for (int i = P; i < N - 1; i++) {
            A[i] = A[i + 1];
        }

        N--;

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