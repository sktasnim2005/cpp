#include<iostream>
using namespace std;
class Parent{
public:
  void print(){
    cout<<"Base Function"<<endl;
  }

};
class Child :public Parent{
public:
  void print(){
    cout<<"Derived Function"<<endl;
  }
};
int main()
{
  Child ob;
  ob.print();
  return 0;
}
