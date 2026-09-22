#include <iostream>

using namespace std;

int main() {
    int numeros[7];

    cout << "Ingrese 7 numeros:" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> numeros[i];
    }

    int menor = numeros[0];

    for (int i = 1; i < 7; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "Menor = " << menor << endl;

    return 0;
}