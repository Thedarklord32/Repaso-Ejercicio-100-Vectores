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
        if (A[i] < A[i + 1]) {
            ordenado = false;
            break;
        }
    }

    if (ordenado) {
        cout << "Ordenado descendentemente: SI" << endl;
    } else {
        cout << "Ordenado descendentemente: NO" << endl;
    }

    return 0;
}