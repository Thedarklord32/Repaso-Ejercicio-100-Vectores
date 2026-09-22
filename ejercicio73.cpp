#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    int P[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    P[0] = A[0];

    for (int i = 1; i < N; i++) {
        P[i] = P[i - 1] + A[i];
    }

    cout << "Prefijos: ";

    for (int i = 0; i < N; i++) {
        cout << P[i] << " ";
    }

    cout << endl;

    return 0;
}