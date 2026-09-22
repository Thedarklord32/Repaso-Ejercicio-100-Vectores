#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) {

        int valor = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > valor) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = valor;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}