#include <iostream>
using namespace std;

int main() {
    int N, K;

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese K: ";
    cin >> K;

    int A[100];
    int deque[100];

    int frente = 0;
    int final = -1;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {

        if (frente <= final && deque[frente] <= i - K) {
            frente++;
        }

        while (frente <= final && A[deque[final]] >= A[i]) {
            final--;
        }

        final++;
        deque[final] = i;

        if (i >= K - 1) {
            cout << A[deque[frente]] << " ";
        }
    }

    return 0;
}