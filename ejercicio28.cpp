#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese los elementos: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int maximo = A[0];
    int minimo = A[0];

    for (int i = 1; i < N; i++) {
        if (A[i] > maximo) {
            maximo = A[i];
        }

        if (A[i] < minimo) {
            minimo = A[i];
        }
    }

    int diferencia = maximo - minimo;

    cout << "Diferencia = " << diferencia << endl;

    return 0;
}