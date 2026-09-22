#include <iostream>
using namespace std;

int main() {
    int numeros[6];

    for (int i = 0; i < 6; i++) {
        cin >> numeros[i];
    }

    for (int i = 5; i >= 0; i--) {
        cout << " " << numeros[i];
    }

    return 0;
}