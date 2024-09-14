#include <iostream>
#include <cstring> // For strcpy

using namespace std;

class Student {
private:
    int rollNumber;
    char name[50];
    double fee;

public:
    // Parameterized constructor
    Student(int no, const char n[], double f) {
        rollNumber = no;
        strcpy(name, n);
        fee = f;
    }

    // Copy constructor
    Student(const Student& other) {
        rollNumber = other.rollNumber;
        strcpy(name, other.name);
        fee = other.fee;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << "\tName: " << name << "\tFee: " << fee << endl;
    }
};

int main() {
    // Create an object using the parameterized constructor
    Student s1(1001, "Alice", 10000);
    cout << "Original student details:" << endl;
    s1.display();

    // Create a new object using the copy constructor
    Student s2 = s1; // This invokes the copy constructor
    cout << "Copied student details:" << endl;
    s2.display();

    return 0;
}

