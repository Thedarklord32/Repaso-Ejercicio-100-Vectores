#include <iostream>
using namespace std;

int main() {
    int nA, nB;
    int A[100], B[100], C[100];
    int nC = 0;

    cin >> nA;

    for (int i = 0; i < nA; i++) {
        cin >> A[i];
    }

    cin >> nB;

    for (int i = 0; i < nB; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < nA; i++) {

        bool estaEnB = false;

        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                estaEnB = true;
                break;
            }
        }

        bool repetido = false;

        for (int j = 0; j < nC; j++) {
            if (C[j] == A[i]) {
                repetido = true;
                break;
            }
        }

        if (!estaEnB && !repetido) {
            C[nC] = A[i];
            nC++;
        }
    }

    cout << "Diferencia: ";

    for (int i = 0; i < nC; i++) {
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}