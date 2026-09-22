#include <iostream>
using namespace std;

int main() {
    int N, X;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> X;

    int inicio = 0;
    int fin = N - 1;
    int posicion = -1;

    while (inicio <= fin) {

        int medio = (inicio + fin) / 2;

        if (A[medio] == X) {
            posicion = medio;
            break;
        }
        else if (A[medio] < X) {
            inicio = medio + 1;
        }
        else {
            fin = medio - 1;
        }
    }

    if (posicion != -1) {
        cout << "Posicion = " << posicion << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}