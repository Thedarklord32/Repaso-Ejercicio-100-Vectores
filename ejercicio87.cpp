#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    int candidato = A[0];
    int contador = 1;

    for (int i = 1; i < N; i++) {
        if (contador == 0) {
            candidato = A[i];
            contador = 1;
        }
        else if (A[i] == candidato) {
            contador++;
        }
        else {
            contador--;
        }
    }

    contador = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == candidato) {
            contador++;
        }
    }

    if (contador > N / 2) {
        cout << "Mayoritaria = " << candidato << endl;
    }
    else {
        cout << "No existe elemento mayoritario" << endl;
    }

    return 0;
}