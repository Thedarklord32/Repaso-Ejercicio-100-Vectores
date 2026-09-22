#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(8);

    int positivos = 0;

    cout << "Ingrese 8 numeros:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];

        if (numeros[i] > 0) {
            positivos++;
        }
    }

    cout << "Positivos = " << positivos << endl;

    return 0;
}