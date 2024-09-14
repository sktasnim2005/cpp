#include<iostream>
using namespace std;
class Test{
public:
  Test()
  {
    cout<<"Constructor is called"<<endl;
  }
  ~Test()
  {
    cout<<"Destructor is called"<<endl;
  }
  void show(){
    cout<<"Show is called"<<endl;
  }

};
int main(){
    Test ob1,ob2;
    ob1.show();
    return 0;

}
