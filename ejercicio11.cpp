#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(5);

    cout << "Ingrese 5 numeros:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) {
        numeros[i] = numeros[i] * 2;
    }

    cout << "Resultado: ";

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}