#include <iostream>
using namespace std;

int main() {
    int N, K;
    int A[100];

    cin >> N;
    cin >> K;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int encontrados = 0;
    int resultado = 0;

    for (int pos = 0; pos < K; pos++) {

        bool existeMayor = false;
        int mayor = 0;

        for (int i = 0; i < N; i++) {

            bool yaUsado = false;

            for (int j = 0; j < pos; j++) {
                if (A[i] == A[j]) {
                    yaUsado = true;
                    break;
                }
            }

            if (!yaUsado) {
                if (!existeMayor || A[i] > mayor) {
                    mayor = A[i];
                    existeMayor = true;
                }
            }
        }

        if (existeMayor) {
            resultado = mayor;

            for (int i = 0; i < N; i++) {
                if (A[i] == mayor) {
                    int aux = A[pos];
                    A[pos] = A[i];
                    A[i] = aux;
                    break;
                }
            }
        }
    }

    cout << K << ".er mayor distinto = " << resultado << endl;

    return 0;
}