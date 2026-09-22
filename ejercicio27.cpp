#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100], B[100];
    int producto = 0;

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese los elementos de A: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "Ingrese los elementos de B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        producto = producto + A[i] * B[i];
    }

    cout << "Producto escalar = " << producto << endl;

    return 0;
}