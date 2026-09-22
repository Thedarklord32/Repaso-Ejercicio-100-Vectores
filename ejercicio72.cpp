#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Calcular la suma total
    int sumaTotal = 0;

    for (int i = 0; i < N; i++) {
        sumaTotal += A[i];
    }

    int sumaIzquierda = 0;
    int indice = -1;

    for (int i = 0; i < N; i++) {

        int sumaDerecha = sumaTotal - sumaIzquierda - A[i];

        if (sumaIzquierda == sumaDerecha) {
            indice = i;
            break;
        }

        sumaIzquierda += A[i];
    }

    if (indice != -1) {
        cout << "Indice de equilibrio = " << indice << endl;
    } else {
        cout << "No existe indice de equilibrio" << endl;
    }

    return 0;
}