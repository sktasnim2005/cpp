#include<iostream>
using namespace std;
class A{
      public:
        void showA(){
          cout<<"Class A"<<endl;
        }
};
class B : public A{
      public:
        void showB(){
            cout<<"Class B"<<endl;
          }
};
class C : public A{
 public:
        void showC(){
            cout<<"Class C"<<endl;
          }
};
int main()
{
  B ob1;
  cout<<"Caling from B : "<<endl;
  ob1.showB();
  ob1.showA();
  C ob2;
  cout<<"Caling from C : "<<endl;
  ob2.showC();
  ob2.showA();
  return 0;
}

