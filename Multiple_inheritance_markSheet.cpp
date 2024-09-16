#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void student(string n, int r){
        name=n;
        roll=r;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll<< endl;
    }
};

class Mark {
protected:
    int mathMarks;
    int banglaMarks;
    int englishMarks;
public:
    void marks(int m, int b, int e){
        mathMarks=m;
        banglaMarks=b;
        englishMarks=e;
        cout << "Math Marks: " << mathMarks << endl;
        cout << "Bangla Marks: " << banglaMarks << endl;
        cout << "English Marks: " << englishMarks << endl;
    }
};

class Marksheet : public Student, public Mark {
public:


};

int main() {
    Marksheet ob;
    ob.student("John ",21);
    ob.marks(80,85,90);
    return 0;
}
