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
class Derived : public Base{
public:
  int getProt()
  {
    return prot;
  }
};
int main()
{
  Derived ob;
  /*cout<<"Private = "<<ob.getPVT()<<endl;
  cout<<"Protected = "<<ob.getProt()<<endl;
  cout<<"Public = "<<ob.pub<<endl;*/
  cout<<"Private = "<<ob.getPVT()<<"\t"<<"Protected = "<<ob.getProt()<<"\t"<<"Public = "<<ob.pub<<endl;
  return 0;
}

