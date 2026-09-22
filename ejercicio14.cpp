#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(8);

    int suma = 0;

    cout << "Ingrese 8 numeros:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            suma = suma + numeros[i];
        }
    }

    cout << "Suma indices pares = " << suma << endl;

    return 0;
}