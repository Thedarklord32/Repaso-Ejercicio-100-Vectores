#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minimo = A[0];
    int maximo = A[0];

    for (int i = 1; i < N; i++) {

        if (A[i] < minimo) {
            minimo = A[i];
        }

        if (A[i] > maximo) {
            maximo = A[i];
        }
    }

    int amplitud = maximo - minimo;

    cout << "Minimo = " << minimo
         << "; Maximo = " << maximo
         << "; Amplitud = " << amplitud << endl;

    return 0;
}