#include<iostream>
using namespace std;
class shop
{
 public:
   float payment = 600;
};
class shop2:public shop
{
 public:
   float due = 600;
};

int main()
{
  shop2 ob1;
  cout<<"Payment = "<<ob1.payment<<endl;
  cout<<"Due = "<<ob1.due<<endl;
  return 0;
}





