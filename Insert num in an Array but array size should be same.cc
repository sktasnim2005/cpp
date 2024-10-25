#include <iostream>
using namespace std;

int main() {
    int A[] = {12, 15, 25, 28, 35, 45, 52, 60};

    cout << "Before Insertion: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    cout << endl<<"Value of k : ";

    int k;
    cin >> k;
    int x = 99; // New element to insert


    for (int i = 7; i > k; i--) {
        A[i] = A[i - 1];
    }

    A[k] = x;

    cout << "After Insertion: " << endl;
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
