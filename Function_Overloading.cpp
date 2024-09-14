#include<iostream>
using namespace std;
class feature
{
 public:
    int func(int i)
   {
     return i;
   }
   double func(double d)
   {
     return d;
   }
   string func(string name)
   {
     return name;
   }
};
int main()
{
  feature obj;
  cout<<obj.func(10)<<endl;
  cout<<obj.func(10.12)<<endl;
  cout<<obj.func("Alex")<<endl;
  return 0;
}
