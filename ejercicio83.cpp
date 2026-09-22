#include <iostream>
using namespace std;

void heapify(int A[], int N, int i) {
    int mayor = i;

    int izquierdo = 2 * i + 1;
    int derecho = 2 * i + 2;

    if (izquierdo < N && A[izquierdo] > A[mayor]) {
        mayor = izquierdo;
    }

    if (derecho < N && A[derecho] > A[mayor]) {
        mayor = derecho;
    }

    if (mayor != i) {
        int aux = A[i];
        A[i] = A[mayor];
        A[mayor] = aux;

        heapify(A, N, mayor);
    }
}

void heapSort(int A[], int N) {

    for (int i = N / 2 - 1; i >= 0; i--) {
        heapify(A, N, i);
    }

    for (int fin = N - 1; fin > 0; fin--) {

        int aux = A[0];
        A[0] = A[fin];
        A[fin] = aux;

        heapify(A, fin, 0);
    }
}

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    heapSort(A, N);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}