#include<iostream>
using namespace std;
class shop{
 public:
  float payment =600;
};
class shop2{
public:
  float due=5000;
};
class owner : public shop,public shop2
{

};
int main()
{
  owner ob1;
  cout<<"Payment = "<<ob1.payment<<endl;
  cout<<"Due = "<<ob1.due<<endl;
  return 0;
}
