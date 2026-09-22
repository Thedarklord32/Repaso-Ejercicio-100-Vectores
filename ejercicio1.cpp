#include <iostream>

using namespace std;

int main(){

    int numeros[5];

    cout << "Ingrese 5 valores enteros: ";

    for(int i = 0; i < 5; i++){
        cin >> numeros[i];
    }

    cout << "Los valores son: ";

    for(int i = 0; i < 5; i++){
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}