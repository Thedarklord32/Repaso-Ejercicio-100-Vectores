#include <iostream>
using namespace std;

int main() {
    int N, K;
    int A[100];

    cin >> N;
    cin >> K;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < K; i++) {

        int posMenor = i;

        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[posMenor]) {
                posMenor = j;
            }
        }

        int aux = A[i];
        A[i] = A[posMenor];
        A[posMenor] = aux;
    }

    cout << K << ".er menor = " << A[K - 1] << endl;

    return 0;
}