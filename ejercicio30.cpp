#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool existeMenor = false;
    bool existeSegundo = false;
    int menor, segundo;

    for (int i = 0; i < N; i++) {
        if (!existeMenor || A[i] < menor) {
            if (existeMenor) {
                segundo = menor;
                existeSegundo = true;
            }

            menor = A[i];
            existeMenor = true;
        }
        else if (A[i] > menor &&
                 (!existeSegundo || A[i] < segundo)) {
            segundo = A[i];
            existeSegundo = true;
                 }
    }

    if (existeSegundo) {
        cout << "Segundo menor = " << segundo << endl;
    } else {
        cout << "No existe segundo menor" << endl;
    }

    return 0;
}