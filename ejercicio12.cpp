#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(5);
    vector<int> cuadrados(5);

    cout << "Ingrese 5 numeros:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        cuadrados[i] = numeros[i] * numeros[i];
    }

    cout << "Resultado: ";

    for (int i = 0; i < 5; i++) {
        cout << cuadrados[i] << " ";
    }

    return 0;
}