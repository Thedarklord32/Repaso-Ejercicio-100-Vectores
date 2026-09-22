#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];
    int frecuencia[101] = {0};

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        frecuencia[A[i]]++;
    }

    int duplicado = 0;
    int faltante = 0;

    for (int i = 1; i <= N; i++) {

        if (frecuencia[i] == 2) {
            duplicado = i;
        }

        if (frecuencia[i] == 0) {
            faltante = i;
        }
    }

    cout << "Duplicado = " << duplicado << endl;
    cout << "Faltante = " << faltante << endl;

    return 0;
}