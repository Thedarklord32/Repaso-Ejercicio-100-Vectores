#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];
    int izquierda[100];
    int derecha[100];
    int R[100];

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    izquierda[0] = 1;

    for (int i = 1; i < N; i++) {
        izquierda[i] = izquierda[i - 1] * A[i - 1];
    }

    derecha[N - 1] = 1;

    for (int i = N - 2; i >= 0; i--) {
        derecha[i] = derecha[i + 1] * A[i + 1];
    }

    for (int i = 0; i < N; i++) {
        R[i] = izquierda[i] * derecha[i];
    }

    cout << "R: ";

    for (int i = 0; i < N; i++) {
        cout << R[i] << " ";
    }

    cout << endl;

    return 0;
}