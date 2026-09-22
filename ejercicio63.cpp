#include <iostream>
using namespace std;

void invertir(int A[], int inicio, int fin) {
    while (inicio < fin) {
        int aux = A[inicio];
        A[inicio] = A[fin];
        A[fin] = aux;

        inicio++;
        fin--;
    }
}

int main() {
    int N, K;
    int A[100];

    cin >> N;
    cin >> K;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    K = K % N;

    invertir(A, 0, N - 1);

    invertir(A, 0, K - 1);

    invertir(A, K, N - 1);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}