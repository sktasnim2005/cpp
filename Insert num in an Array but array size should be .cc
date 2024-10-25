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
    int x = 99;

    if (k < 0 || k > 7) {
        cout << "Invalid position!" << endl;
        return 1;
    }

   
    int newArr[9];

    // Copy elements before the insertion point
    for (int i = 0; i < k; i++) {
        newArr[i] = A[i];
    }

    // Insert the new element
    newArr[k] = x;

    // Copy remaining elements after the insertion point
    for (int i = k + 1; i < 9; i++) {
        newArr[i] = A[i - 1];
    }

    // Display array after insertion
    cout << "After Insertion: " << endl;
    for (int i = 0; i < 9; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
