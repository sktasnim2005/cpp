#include<iostream>
using namespace std;
class Base{
 private:
  int pvt=1;
 protected:
  int prot=2;
 public:
  int pub=3;
  int getPVT(){
    return pvt;
  }
};
class Derived : protected Base{
public:
  int getProt()
  {
    return prot;
  }
    int getPub(){
    return pub;
  }

};
int main()
{
  Derived ob;
  //cout<<"Private = "<<ob.getPVT()<<endl;
  cout<<"Private can't be accessed !! "<<endl;
  cout<<"Protected = "<<ob.getProt()<<endl;
  //cout<<"Public = "<<ob.pub<<endl;
  cout<<"Public = "<<ob.getPub()<<endl;
  return 0;
}


