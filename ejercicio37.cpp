#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool ordenado = true;

    for (int i = 0; i < N - 1; i++) {
        if (A[i] > A[i + 1]) {
            ordenado = false;
            break;
        }
    }

    if (ordenado) {
        cout << "Ordenado ascendentemente: SI" << endl;
    } else {
        cout << "Ordenado ascendentemente: NO" << endl;
    }

    return 0;
}