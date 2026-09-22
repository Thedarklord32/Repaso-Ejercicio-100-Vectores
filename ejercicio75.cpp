#include <iostream>
using namespace std;

int main() {
    int N;
    long long A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long mayor1 = A[0];
    long long mayor2 = A[0];

    long long menor1 = A[0];
    long long menor2 = A[0];

    for (int i = 1; i < N; i++) {

        if (A[i] > mayor1) {
            mayor2 = mayor1;
            mayor1 = A[i];
        }
        else if (A[i] > mayor2) {
            mayor2 = A[i];
        }

        if (A[i] < menor1) {
            menor2 = menor1;
            menor1 = A[i];
        }
        else if (A[i] < menor2) {
            menor2 = A[i];
        }
    }

    long long productoMayores = mayor1 * mayor2;
    long long productoMenores = menor1 * menor2;

    if (productoMayores >= productoMenores) {
        cout << "Mayor producto = "
             << productoMayores
             << " (" << mayor1
             << " * " << mayor2 << ")" << endl;
    }
    else {
        cout << "Mayor producto = "
             << productoMenores
             << " (" << menor1
             << " * " << menor2 << ")" << endl;
    }

    return 0;
}