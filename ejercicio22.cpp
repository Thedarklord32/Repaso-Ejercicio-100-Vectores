#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> numeros(n);

    cout << "Ingrese los " << n << " numeros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int ultimo = numeros[n - 1];

    for (int i = n - 1; i > 0; i--) {
        numeros[i] = numeros[i - 1];
    }

    numeros[0] = ultimo;

    cout << "Resultado: ";

    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}