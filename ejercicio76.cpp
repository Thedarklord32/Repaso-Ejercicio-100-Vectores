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
    long long mayor2 = A[1];
    long long mayor3 = A[2];

    long long menor1 = A[0];
    long long menor2 = A[1];

    if (mayor1 < mayor2) {
        long long aux = mayor1;
        mayor1 = mayor2;
        mayor2 = aux;
    }

    if (mayor2 < mayor3) {
        long long aux = mayor2;
        mayor2 = mayor3;
        mayor3 = aux;
    }

    if (mayor1 < mayor2) {
        long long aux = mayor1;
        mayor1 = mayor2;
        mayor2 = aux;
    }

    if (menor1 > menor2) {
        long long aux = menor1;
        menor1 = menor2;
        menor2 = aux;
    }

    for (int i = 3; i < N; i++) {

        if (A[i] > mayor1) {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = A[i];
        }
        else if (A[i] > mayor2) {
            mayor3 = mayor2;
            mayor2 = A[i];
        }
        else if (A[i] > mayor3) {
            mayor3 = A[i];
        }

        if (A[i] < menor1) {
            menor2 = menor1;
            menor1 = A[i];
        }
        else if (A[i] < menor2) {
            menor2 = A[i];
        }
    }

    long long productoMayores = mayor1 * mayor2 * mayor3;
    long long productoMixto = menor1 * menor2 * mayor1;

    if (productoMayores >= productoMixto) {

        cout << "Mayor producto = "
             << productoMayores
             << " (" << mayor1
             << " * " << mayor2
             << " * " << mayor3 << ")" << endl;

    } else {

        cout << "Mayor producto = "
             << productoMixto
             << " (" << menor1
             << " * " << menor2
             << " * " << mayor1 << ")" << endl;
    }

    return 0;
}