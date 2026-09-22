#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, M;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Ingrese M: ";
    cin >> M;

    int B[100];

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    if (N > M) {
        int temp[100];

        for (int i = 0; i < N; i++) {
            temp[i] = A[i];
        }

        for (int i = 0; i < M; i++) {
            A[i] = B[i];
        }

        for (int i = 0; i < N; i++) {
            B[i] = temp[i];
        }

        int aux = N;
        N = M;
        M = aux;
    }

    int izquierda = 0;
    int derecha = N;

    while (izquierda <= derecha) {

        int corteA = (izquierda + derecha) / 2;
        int corteB = (N + M + 1) / 2 - corteA;

        int izquierdaA;

        if (corteA == 0)
            izquierdaA = INT_MIN;
        else
            izquierdaA = A[corteA - 1];

        int derechaA;

        if (corteA == N)
            derechaA = INT_MAX;
        else
            derechaA = A[corteA];

        int izquierdaB;

        if (corteB == 0)
            izquierdaB = INT_MIN;
        else
            izquierdaB = B[corteB - 1];

        int derechaB;

        if (corteB == M)
            derechaB = INT_MAX;
        else
            derechaB = B[corteB];

        if (izquierdaA <= derechaB &&
            izquierdaB <= derechaA) {

            if ((N + M) % 2 == 1) {

                int mayorIzquierda;

                if (izquierdaA > izquierdaB)
                    mayorIzquierda = izquierdaA;
                else
                    mayorIzquierda = izquierdaB;

                cout << "Mediana = " << mayorIzquierda << endl;
            }
            else {
                int mayorIzquierda;
                int menorDerecha;

                if (izquierdaA > izquierdaB)
                    mayorIzquierda = izquierdaA;
                else
                    mayorIzquierda = izquierdaB;

                if (derechaA < derechaB)
                    menorDerecha = derechaA;
                else
                    menorDerecha = derechaB;

                double mediana =
                    (mayorIzquierda + menorDerecha) / 2.0;

                cout << "Mediana = " << mediana << endl;
            }

            break;
        }

        if (izquierdaA > derechaB) {
            derecha = corteA - 1;
        }
        else {
            izquierda = corteA + 1;
        }
    }

    return 0;
}