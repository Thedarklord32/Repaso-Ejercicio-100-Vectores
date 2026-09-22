#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    double suma = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        suma += A[i];
    }

    double promedio = suma / N;

    int masCercano = A[0];
    double menorDistancia = fabs(A[0] - promedio);

    for (int i = 1; i < N; i++) {
        double distancia = fabs(A[i] - promedio);

        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            masCercano = A[i];
        }
    }

    cout << "Promedio = " << promedio
         << "; Mas cercano = " << masCercano << endl;

    return 0;
}