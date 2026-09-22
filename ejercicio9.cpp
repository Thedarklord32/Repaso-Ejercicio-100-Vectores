#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(10);

    int pares = 0;

    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];

        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }

    cout << "Pares = " << pares << endl;

    return 0;
}