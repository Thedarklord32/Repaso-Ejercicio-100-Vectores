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

    int i = 0;
    int j = 0;

    while (i < nA && j < nB) {
        C[nC] = A[i];
        nC++;
        i++;

        C[nC] = B[j];
        nC++;
        j++;
    }

    while (i < nA) {
        C[nC] = A[i];
        nC++;
        i++;
    }

    while (j < nB) {
        C[nC] = B[j];
        nC++;
        j++;
    }

    for (int k = 0; k < nC; k++) {
        cout << C[k] << " ";
    }

    cout << endl;

    return 0;
}