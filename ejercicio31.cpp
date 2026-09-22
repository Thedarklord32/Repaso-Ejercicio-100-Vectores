#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {

        bool repetido = false;

        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                repetido = true;
            }
        }

        if (!repetido) {
            int contador = 0;

            for (int j = 0; j < N; j++) {
                if (A[i] == A[j]) {
                    contador++;
                }
            }

            cout << A[i] << " -> " << contador;

            if (i < N - 1) {
                cout << "; ";
            }
        }
    }

    cout << endl;

    return 0;
}