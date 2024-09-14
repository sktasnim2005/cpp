#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int x = 5;
    int y = 3;
    int result = add(x, y); // Function call
    cout << "Sum: " << result << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

