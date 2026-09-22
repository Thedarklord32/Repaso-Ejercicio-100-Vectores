#include <iostream>
using namespace std;

int primeraAparicion(int A[], int N, int X) {
    int izquierda = 0;
    int derecha = N - 1;
    int respuesta = -1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (A[medio] == X) {
            respuesta = medio;
            derecha = medio - 1;
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

    int primera = primeraAparicion(A, N, X);

    if (primera == -1) {
        cout << "Cantidad = 0" << endl;
        return 0;
    }

    int ultima = ultimaAparicion(A, N, X);

    int cantidad = ultima - primera + 1;

    cout << "Cantidad = " << cantidad << endl;

    return 0;
}