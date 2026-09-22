#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int M = 0;

    for (int i = 0; i < N; i++) {

        bool repetido = false;

        for (int j = 0; j < M; j++) {
            if (A[i] == A[j]) {
                repetido = true;
                break;
            }
        }

        if (!repetido) {
            A[M] = A[i];
            M++;
        }
    }

    N = M;

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}