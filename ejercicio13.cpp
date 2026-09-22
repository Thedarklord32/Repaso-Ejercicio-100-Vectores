#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(7);

    cout << "Ingrese 7 numeros:" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 7; i++) {
        if (numeros[i] < 0) {
            numeros[i] = 0;
        }
    }

    cout << "Resultado: ";

    for (int i = 0; i < 7; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}