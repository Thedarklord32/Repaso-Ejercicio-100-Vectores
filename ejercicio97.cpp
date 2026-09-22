#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];
    int primera[201];

    for (int i = 0; i < 201; i++) {
        primera[i] = -2;
    }

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int suma = 0;
    int longitudMaxima = 0;

    primera[100] = -1;

    for (int i = 0; i < N; i++) {

        if (A[i] == 0) {
            suma--;
        }
        else {
            suma++;
        }

        int posicion = suma + 100;

        if (primera[posicion] == -2) {
            primera[posicion] = i;
        }
        else {
            int longitud = i - primera[posicion];

            if (longitud > longitudMaxima) {
                longitudMaxima = longitud;
            }
        }
    }

    cout << "Longitud maxima = " << longitudMaxima << endl;

    return 0;
}