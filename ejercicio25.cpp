#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int A[50];
    int B[50];
    int C[50];

    cout << "Ingrese los elementos del arreglo A:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Ingrese los elementos del arreglo B:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i];
    }

    cout << "C: ";

    for (int i = 0; i < n; i++) {
        cout << C[i] << " ";
    }

    cout << endl;

    return 0;
}