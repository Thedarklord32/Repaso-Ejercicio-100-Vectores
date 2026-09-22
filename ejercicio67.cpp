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

    for (int i = 0; i < N - 1 && !encontrado; i++) {

        for (int j = i + 1; j < N; j++) {

            if (A[i] + A[j] == X) {

                cout << "Indices: " << i << " y " << j
                     << "; Valores: " << A[i]
                     << " + " << A[j]
                     << " = " << X << endl;

                encontrado = true;
                break;
            }
        }
    }

    if (!encontrado) {
        cout << "No existe un par" << endl;
    }

    return 0;
}