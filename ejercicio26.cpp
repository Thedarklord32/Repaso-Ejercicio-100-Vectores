#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño de los arreglos: ";
    cin >> N;

    int A[100], B[100], C[100];

    cout << "Ingrese los elementos de A: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Ingrese los elementos de B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i] - B[i];
    }

    cout << "C: ";
    for (int i = 0; i < N; i++) {
        cout << C[i] << " ";
    }

    return 0;
}