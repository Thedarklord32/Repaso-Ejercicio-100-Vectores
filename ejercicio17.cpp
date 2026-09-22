#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(8);

    int x;
    bool encontrado = false;

    cout << "Ingrese 8 numeros:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
    }

    cout << "Ingrese el numero que desea buscar: ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        if (numeros[i] == x) {
            encontrado = true;
        }
    }

    if (encontrado == true) {
        cout << "Encontrado" << endl;
    } else {
        cout << "No encontrado" << endl;
    }

    return 0;
}