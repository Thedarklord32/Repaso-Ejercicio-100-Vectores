#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100], B[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    bool iguales = true;

    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            iguales = false;
            break;
        }
    }

    if (iguales) {
        cout << "Iguales: SI" << endl;
    } else {
        cout << "Iguales: NO" << endl;
    }

    return 0;
}