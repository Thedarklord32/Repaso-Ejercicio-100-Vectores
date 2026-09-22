#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int faltante = N;

    for (int i = 0; i < N; i++) {
        faltante = faltante ^ i;
        faltante = faltante ^ A[i];
    }

    cout << "Faltante = " << faltante << endl;

    return 0;
}