#include<iostream>
using namespace std;

int main() {
    int n, r = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n != 0) {
        int d = n % 10; //inside the loop, this line calculates the last digit of n by taking the remainder of n divided by 10.
        r = r * 10 + d; //This line constructs the reversed number. It multiplies the current value of r by 10 (which shifts the digits to the left) and then adds the last digit of n
        n /= 10;//This line removes the last digit from n by dividing it by 10.
    }

    cout << "Reversed number = " << r << endl;
    return 0;
}

