#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {

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

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}