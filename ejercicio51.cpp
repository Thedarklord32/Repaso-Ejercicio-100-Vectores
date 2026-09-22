#include <iostream>
using namespace std;

int main() {
    int nA, nB;
    int A[100], B[100], C[200];
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
        bool existe = false;

        for (int j = 0; j < nC; j++) {
            if (C[j] == A[i]) {
                existe = true;
                break;
            }
        }

        if (!existe) {
            C[nC] = A[i];
            nC++;
        }
    }

    for (int i = 0; i < nB; i++) {
        bool existe = false;

        for (int j = 0; j < nC; j++) {
            if (C[j] == B[i]) {
                existe = true;
                break;
            }
        }

        if (!existe) {
            C[nC] = B[i];
            nC++;
        }
    }

    cout << "Union: ";

    for (int i = 0; i < nC; i++) {
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}