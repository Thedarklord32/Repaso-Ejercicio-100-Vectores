#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sumaActual = A[0];
    int sumaMinima = A[0];

    int inicioActual = 0;
    int mejorInicio = 0;
    int mejorFin = 0;

    for (int i = 1; i < N; i++) {

        if (A[i] < sumaActual + A[i]) {
            sumaActual = A[i];
            inicioActual = i;
        } else {
            sumaActual += A[i];
        }

        if (sumaActual < sumaMinima) {
            sumaMinima = sumaActual;
            mejorInicio = inicioActual;
            mejorFin = i;
        }
    }

    cout << "Suma minima = " << sumaMinima
         << "; Indices = " << mejorInicio
         << ".." << mejorFin << endl;

    return 0;
}