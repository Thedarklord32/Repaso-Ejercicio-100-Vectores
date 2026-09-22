#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(6);
    vector<int> copia(6);

    cout << "Ingrese 6 numeros:" << endl;

    for (int i = 0; i < 6; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 6; i++) {
        copia[i] = numeros[i];
    }

    cout << "Copia: ";

    for (int i = 0; i < 6; i++) {
        cout << copia[i] << " ";
    }

    cout << endl;

    return 0;
}