#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    bool presente[101] = {false};

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool esPermutacion = true;

    for (int i = 0; i < N; i++) {

        if (A[i] < 1 || A[i] > N) {
            esPermutacion = false;
            break;
        }

        if (presente[A[i]]) {
            esPermutacion = false;
            break;
        }

        presente[A[i]] = true;
    }

    if (esPermutacion) {
        cout << "Es permutacion: SI" << endl;
    } else {
        cout << "Es permutacion: NO" << endl;
    }

    return 0;
}