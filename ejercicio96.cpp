#include <iostream>
using namespace std;

int main() {
    int N, S;

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese S: ";
    cin >> S;

    int A[100];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int izquierda = 0;
    int suma = 0;
    int respuesta = N + 1;

    for (int derecha = 0; derecha < N; derecha++) {

        suma = suma + A[derecha];

        while (suma >= S) {

            int longitud = derecha - izquierda + 1;

            if (longitud < respuesta) {
                respuesta = longitud;
            }

            suma = suma - A[izquierda];
            izquierda++;
        }
    }

    if (respuesta == N + 1) {
        cout << "No existe subarreglo" << endl;
    }
    else {
        cout << "Longitud minima = " << respuesta << endl;
    }

    return 0;
}