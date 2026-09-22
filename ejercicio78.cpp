#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    int B[100];
    int cuenta[101] = {0};

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cuenta[A[i]]++;
    }

    int posicion = 0;

    for (int valor = 0; valor <= 100; valor++) {

        while (cuenta[valor] > 0) {
            B[posicion] = valor;
            posicion++;
            cuenta[valor]--;
        }
    }

    for (int i = 0; i < N; i++) {
        A[i] = B[i];
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}