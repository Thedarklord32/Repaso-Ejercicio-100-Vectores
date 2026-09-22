#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int numeros[50];

    cout << "Ingrese los " << n << " numeros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int primero = numeros[0];

    for (int i = 0; i < n - 1; i++) {
        numeros[i] = numeros[i + 1];
    }

    numeros[n - 1] = primero;

    cout << "Resultado: ";

    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}