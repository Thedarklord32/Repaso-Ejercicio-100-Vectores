#include <iostream>
using namespace std;

void fusionar(int A[], int auxiliar[], int inicio, int medio, int fin) {
    int i = inicio;
    int j = medio + 1;
    int k = inicio;

    while (i <= medio && j <= fin) {
        if (A[i] <= A[j]) {
            auxiliar[k] = A[i];
            i++;
        } else {
            auxiliar[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= medio) {
        auxiliar[k] = A[i];
        i++;
        k++;
    }

    while (j <= fin) {
        auxiliar[k] = A[j];
        j++;
        k++;
    }

    for (int p = inicio; p <= fin; p++) {
        A[p] = auxiliar[p];
    }
}

void mergeSort(int A[], int auxiliar[], int inicio, int fin) {
    if (inicio >= fin) {
        return;
    }

    int medio = (inicio + fin) / 2;

    mergeSort(A, auxiliar, inicio, medio);
    mergeSort(A, auxiliar, medio + 1, fin);

    fusionar(A, auxiliar, inicio, medio, fin);
}

int main() {
    int N;
    int A[100];
    int auxiliar[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    mergeSort(A, auxiliar, 0, N - 1);

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}