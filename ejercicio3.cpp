#include <iostream>
using namespace std;

int main() {
    int numeros[5];
    int suma = 0;

    cout << "Ingrese 5 numeros:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    cout << "Suma = " << suma << endl;

    return 0;
}