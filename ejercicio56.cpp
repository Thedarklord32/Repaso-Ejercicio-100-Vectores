#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int cambios = 0;

    for (int i = 0; i < N - 1; i++) {

        if (A[i] != 0 && A[i + 1] != 0) {

            if ((A[i] > 0 && A[i + 1] < 0) ||
                (A[i] < 0 && A[i + 1] > 0)) {
                cambios++;
                }
        }
    }

    cout << "Cambios de signo = " << cambios << endl;

    return 0;
}