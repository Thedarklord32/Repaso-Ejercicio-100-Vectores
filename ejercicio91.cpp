#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];
    int R[100];
    int pila[100];
    int tope = -1;

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];

        R[i] = -1;
    }

    for (int i = N - 1; i >= 0; i--) {

        while (tope >= 0 && pila[tope] <= A[i]) {
            tope--;
        }

        if (tope >= 0) {
            R[i] = pila[tope];
        }

        tope++;
        pila[tope] = A[i];
    }

    cout << "Resultado: ";

    for (int i = 0; i < N; i++) {
        cout << R[i] << " ";
    }

    cout << endl;

    return 0;
}