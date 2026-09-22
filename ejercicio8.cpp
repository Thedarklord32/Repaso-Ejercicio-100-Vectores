#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(8);

    int negativos = 0;

    cout << "Ingrese 8 numeros:" << endl;

    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];

        if (numeros[i] < 0) {
            negativos++;
        }
    }

    cout << "Negativos = " << negativos << endl;

    return 0;
}