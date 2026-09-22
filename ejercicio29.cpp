#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cout << "Ingrese el valor de N: :";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool existeMayor = false;
    bool existeSegundo = false;
    int mayor, segundo;

    for (int i = 0; i < N; i++) {
        if (!existeMayor || A[i] > mayor) {
            if (existeMayor) {
                segundo = mayor;
                existeSegundo = true;
            }

            mayor = A[i];
            existeMayor = true;
        }
        else if (A[i] < mayor &&
                 (!existeSegundo || A[i] > segundo)) {
            segundo = A[i];
            existeSegundo = true;
                 }
    }

    if (existeSegundo) {
        cout << "Segundo mayor = " << segundo << endl;
    } else {
        cout << "No existe segundo mayor" << endl;
    }

    return 0;
}