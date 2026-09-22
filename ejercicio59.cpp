#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool palindromo = true;

    for (int i = 0; i < N / 2; i++) {

        if (A[i] != A[N - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    if (palindromo) {
        cout << "Palindromo: SI" << endl;
    } else {
        cout << "Palindromo: NO" << endl;
    }

    return 0;
}