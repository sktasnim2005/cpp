#include<iostream>
using namespace std;
class shop{
 public:
  void show()
  {
    cout<<"This is shop"<<endl;
  }
};
class shop2{
public:
  void show()
  {
    cout<<"This is shop2"<<endl;
  }
};
class owner : public shop,public shop2
{

};
int main()
{
  owner ob1;
  ob1.shop:: show();
  ob1.shop2:: show();
  return 0;
}

