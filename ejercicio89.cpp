#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];
    int izquierda[100];
    int derecha[100];

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    izquierda[0] = A[0];

    for (int i = 1; i < N; i++) {
        if (A[i] > izquierda[i - 1]) {
            izquierda[i] = A[i];
        }
        else {
            izquierda[i] = izquierda[i - 1];
        }
    }

    derecha[N - 1] = A[N - 1];

    for (int i = N - 2; i >= 0; i--) {
        if (A[i] > derecha[i + 1]) {
            derecha[i] = A[i];
        }
        else {
            derecha[i] = derecha[i + 1];
        }
    }

    int agua = 0;

    for (int i = 0; i < N; i++) {
        int limite;

        if (izquierda[i] < derecha[i]) {
            limite = izquierda[i];
        }
        else {
            limite = derecha[i];
        }

        agua = agua + (limite - A[i]);
    }

    cout << "Agua atrapada = " << agua << endl;

    return 0;
}