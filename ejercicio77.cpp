#include <iostream>
using namespace std;

int main() {
    int N;
    int A[100];
    int frecuencias[10] = {0};

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        frecuencias[A[i]]++;
    }

    cout << "Frecuencias [0..9]: ";

    for (int i = 0; i < 10; i++) {
        cout << frecuencias[i] << " ";
    }

    cout << endl;

    return 0;
}