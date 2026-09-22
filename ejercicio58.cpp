#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int diferenciaMaxima = abs(A[0] - A[1]);
    int primero = A[0];
    int segundo = A[1];

    for (int i = 1; i < N - 1; i++) {

        int diferenciaActual = abs(A[i] - A[i + 1]);

        if (diferenciaActual > diferenciaMaxima) {
            diferenciaMaxima = diferenciaActual;
            primero = A[i];
            segundo = A[i + 1];
        }
    }

    cout << "Par: " << primero << " " << segundo
         << "; Diferencia = " << diferenciaMaxima << endl;

    return 0;
}