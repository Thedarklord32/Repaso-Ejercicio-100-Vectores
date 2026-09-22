#include <iostream>
using namespace std;

void leerDatos(double numeros[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

double CalcularMayor(double numeros[], int n) {
    double mayor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    return mayor;
}

void MostrarResultado(double mayor) {
    cout << "El numero Mayor es: " << mayor << endl;
}

int main() {
    const int n = 7;
    double numeros[n];
    double mayor;

    leerDatos(numeros, n);

    mayor = CalcularMayor(numeros, n);

    MostrarResultado(mayor);

    return 0;
}