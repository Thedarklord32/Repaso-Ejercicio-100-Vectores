#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(10);

    int ceros = 0;

    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == 0) {
            ceros++;
        }
    }

    cout << "Ceros = " << ceros << endl;

    return 0;
}