#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(10);

    int x;
    int posicion = -1;

    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    cout << "Ingrese el numero que desea buscar: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            posicion = i;
            break;
        }
    }

    cout << "Primera posicion = " << posicion << endl;

    return 0;
}