#include <iostream>
using namespace std;

int main() {
    int N, K;

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese K: ";
    cin >> K;

    int A[100];

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    int suma = 0;

    for (int i = 0; i < K; i++) {
        suma = suma + A[i];
    }

    int sumaMaxima = suma;
    int posicion = 0;

    for (int i = K; i < N; i++) {
        suma = suma - A[i - K];
        suma = suma + A[i];

        if (suma > sumaMaxima) {
            sumaMaxima = suma;
            posicion = i - K + 1;
        }
    }

    cout << "Suma maxima = " << sumaMaxima << endl;

    cout << "Ventana: ";

    for (int i = posicion; i < posicion + K; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}