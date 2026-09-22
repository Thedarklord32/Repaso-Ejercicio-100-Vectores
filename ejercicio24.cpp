#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int numeros[50];
    int pares[50];
    int impares[50];

    int cantidadPares = 0;
    int cantidadImpares = 0;

    cout << "Ingrese los " << n << " numeros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < n; i++) {

        if (numeros[i] % 2 == 0) {
            pares[cantidadPares] = numeros[i];
            cantidadPares++;
        }
        else {
            impares[cantidadImpares] = numeros[i];
            cantidadImpares++;
        }
    }

    cout << "Pares: ";

    for (int i = 0; i < cantidadPares; i++) {
        cout << pares[i] << " ";
    }

    cout << endl;

    cout << "Impares: ";

    for (int i = 0; i < cantidadImpares; i++) {
        cout << impares[i] << " ";
    }

    cout << endl;

    return 0;
}