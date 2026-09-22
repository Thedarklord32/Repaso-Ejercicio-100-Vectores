#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int moda = A[0];
    int mayorFrecuencia = 0;

    for (int i = 0; i < N; i++) {
        int frecuencia = 0;

        for (int j = 0; j < N; j++) {
            if (A[i] == A[j]) {
                frecuencia++;
            }
        }

        if (frecuencia > mayorFrecuencia ||
            (frecuencia == mayorFrecuencia && A[i] < moda)) {
            mayorFrecuencia = frecuencia;
            moda = A[i];
            }
    }

    cout << "Moda = " << moda
         << "; Frecuencia = " << mayorFrecuencia << endl;

    return 0;
}