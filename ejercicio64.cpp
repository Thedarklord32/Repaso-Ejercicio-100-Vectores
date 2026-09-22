#include <iostream>
using namespace std;

int main() {
    int N, X;
    int A[100];

    cin >> N;
    cin >> X;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int izquierda = 0;
    int derecha = N - 1;

    while (izquierda <= derecha) {

        while (izquierda <= derecha && A[izquierda] < X) {
            izquierda++;
        }

        while (izquierda <= derecha && A[derecha] > X) {
            derecha--;
        }

        if (izquierda <= derecha) {
            int aux = A[izquierda];
            A[izquierda] = A[derecha];
            A[derecha] = aux;

            izquierda++;
            derecha--;
        }
    }

    int pos = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            int aux = A[i];
            A[i] = A[pos];
            A[pos] = aux;
            pos++;
        }
    }

    int posIguales = pos;

    for (int i = pos; i < N; i++) {
        if (A[i] == X) {
            int aux = A[i];
            A[i] = A[posIguales];
            A[posIguales] = aux;
            posIguales++;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}