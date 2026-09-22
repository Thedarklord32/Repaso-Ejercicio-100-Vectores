#include <iostream>
using namespace std;

int particionar(int A[], int inicio, int fin) {

    int pivote = A[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {

        if (A[j] <= pivote) {
            i++;

            int aux = A[i];
            A[i] = A[j];
            A[j] = aux;
        }
    }

    int aux = A[i + 1];
    A[i + 1] = A[fin];
    A[fin] = aux;

    return i + 1;
}

void quickSort(int A[], int inicio, int fin) {

    if (inicio < fin) {

        int posicionPivote = particionar(A, inicio, fin);

        quickSort(A, inicio, posicionPivote - 1);

        quickSort(A, posicionPivote + 1, fin);
    }
}

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    quickSort(A, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}