#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N: ";
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    int areaMaxima = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {

            int menor;

            if (A[i] < A[j])
                menor = A[i];
            else
                menor = A[j];

            int area = menor * (j - i);

            if (area > areaMaxima) {
                areaMaxima = area;
            }
        }
    }

    cout << "Area maxima = " << areaMaxima << endl;

    return 0;
}