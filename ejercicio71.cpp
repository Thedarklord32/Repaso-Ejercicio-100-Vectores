#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sumaActualMax = A[0];
    int sumaMaxima = A[0];

    int sumaActualMin = A[0];
    int sumaMinima = A[0];

    int sumaTotal = A[0];

    for (int i = 1; i < N; i++) {

        sumaTotal += A[i];

        if (A[i] > sumaActualMax + A[i]) {
            sumaActualMax = A[i];
        } else {
            sumaActualMax += A[i];
        }

        if (sumaActualMax > sumaMaxima) {
            sumaMaxima = sumaActualMax;
        }

        if (A[i] < sumaActualMin + A[i]) {
            sumaActualMin = A[i];
        } else {
            sumaActualMin += A[i];
        }

        if (sumaActualMin < sumaMinima) {
            sumaMinima = sumaActualMin;
        }
    }

    if (sumaMaxima < 0) {
        cout << "Suma maxima circular = " << sumaMaxima << endl;
    } else {
        int sumaCircular = sumaTotal - sumaMinima;

        if (sumaCircular > sumaMaxima) {
            cout << "Suma maxima circular = "
                 << sumaCircular << endl;
        } else {
            cout << "Suma maxima circular = "
                 << sumaMaxima << endl;
        }
    }

    return 0;
}