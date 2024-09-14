#include<iostream>
using namespace std;
class A{
public:
  void show(){
    cout<<"This is showFunction"<<endl;
  }
};
class B : public A{
public:
  void display(){
    cout<<"This is displayFunction"<<endl;
  }
};
class C : public B{
public:
  void screenshow(){
    cout<<"This is screenshowFunction"<<endl;
  }
};
int main()
{
  C ob;
  ob.show();
  ob.display();
  ob.screenshow();
  return 0;
}
