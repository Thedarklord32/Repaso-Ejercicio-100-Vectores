#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int mejorInicio = 0;
    int mejorLongitud = 1;

    int inicioActual = 0;
    int longitudActual = 1;

    for (int i = 1; i < N; i++) {

        if (A[i] > A[i - 1]) {
            longitudActual++;
        } else {
            if (longitudActual > mejorLongitud) {
                mejorLongitud = longitudActual;
                mejorInicio = inicioActual;
            }

            inicioActual = i;
            longitudActual = 1;
        }
    }

    if (longitudActual > mejorLongitud) {
        mejorLongitud = longitudActual;
        mejorInicio = inicioActual;
    }

    cout << "Longitud = " << mejorLongitud
         << "; Tramo: ";

    for (int i = mejorInicio;
         i < mejorInicio + mejorLongitud;
         i++) {
        cout << A[i] << " ";
         }

    cout << endl;

    return 0;
}