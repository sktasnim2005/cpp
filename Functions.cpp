#include<iostream>
using namespace std;
class student
{
 private:
   int id;
   char name[20];
 public:
    void display()
    {
      cout<<id<<"\t"<<name<<endl;
    }
};
int main() {
  student ob1(1460, "Tasnim");
  ob1.display(); // Call the display function to print details
  return 0;
}
