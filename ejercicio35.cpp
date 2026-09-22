#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int j = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != 0) {
            A[j] = A[i];
            j++;
        }
    }

    while (j < N) {
        A[j] = 0;
        j++;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}