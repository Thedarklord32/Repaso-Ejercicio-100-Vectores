#include <iostream>
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

    cout << "Promedio = " << promedio << "; Mayores: ";

    for (int i = 0; i < N; i++) {
        if (A[i] > promedio) {
            cout << A[i] << " ";
        }
    }

    cout << endl;

    return 0;
}