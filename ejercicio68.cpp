#include <iostream>
using namespace std;

int main() {
    int N, X;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> X;

    bool encontrado = false;

    for (int i = 0; i < N - 2 && !encontrado; i++) {
        for (int j = i + 1; j < N - 1 && !encontrado; j++) {
            for (int k = j + 1; k < N; k++) {

                if (A[i] + A[j] + A[k] == X) {
                    cout << "Valores: "
                         << A[i] << " "
                         << A[j] << " "
                         << A[k] << endl;

                    encontrado = true;
                    break;
                }
            }
        }
    }

    if (!encontrado) {
        cout << "No existe una terna" << endl;
    }

    return 0;
}