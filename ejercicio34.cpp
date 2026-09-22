#include <iostream>
using namespace std;

int main() {
    int N, X;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> X;

    int j = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] != X) {
            A[j] = A[i];
            j++;
        }
    }

    N = j;

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}