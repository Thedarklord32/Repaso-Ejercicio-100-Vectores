#include <iostream>
using namespace std;

int ultimaAparicion(int A[], int N, int X) {
    int izquierda = 0;
    int derecha = N - 1;
    int respuesta = -1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (A[medio] == X) {
            respuesta = medio;

            izquierda = medio + 1;
        }
        else if (A[medio] < X) {
            izquierda = medio + 1;
        }
        else {
            derecha = medio - 1;
        }
    }

    return respuesta;
}

int main() {
    int N, X;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> X;

    int posicion = ultimaAparicion(A, N, X);

    if (posicion != -1) {
        cout << "Ultima posicion = " << posicion << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}