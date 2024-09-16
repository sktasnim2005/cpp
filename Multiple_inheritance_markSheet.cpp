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
    Marksheet ob,ob2;
    cout<<"Student 1 : "<<endl;
    ob.student("Tasnim ",1460);
    ob.marks(100,85,90);
    cout<<"Student 2 : "<<endl;
    ob2.student("Alex ",1234);
    ob2.marks(90,81,96);
    return 0;
}
