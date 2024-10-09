#include <iostream>
using namespace std;

// function to convert decimal to binary and return length
int decToBinaryLength(int n) {
    int length = 0;
    while (n > 0) {
        n = n / 2;
        length++;
    }
    return length;
}

// Driver program to test above function
int main() {
    int n;
    cin >> n;
    int length = decToBinaryLength(n);
    cout << "The length of the binary number is: " << length << endl;
    return 0;
}
