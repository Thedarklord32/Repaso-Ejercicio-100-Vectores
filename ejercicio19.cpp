#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(10);

    int x;
    int apariciones = 0;

    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    cout << "Ingrese el valor X que desea buscar: ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == x) {
            apariciones++;
        }
    }

    cout << "Apariciones = " << apariciones << endl;

    return 0;
}