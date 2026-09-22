#include <iostream>
using namespace std;

void leerDatos(double numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

double procedimiento(double numeros[], int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + numeros[i];
    }

    return suma / n;
}

void mostrarResultado(double promedio) {
    cout << "Promedio = " << promedio << endl;
}

int main() {
    int n = 6;
    double numeros[n];
    double promedio;

    leerDatos(numeros, n);

    promedio = procedimiento(numeros, n);

    mostrarResultado(promedio);

    return 0;
}