#include<iostream>
using namespace std;
class feature
{
 public:
    int func(int i)
   {
     cout<< i<<endl;
   }
   double func(double d)
   {
     cout<< d<<endl;
   }
   string func(string name)
   {
     cout<< name<<endl;
   }
};
int main()
{
  feature obj;
  obj.func(10);
  obj.func(10.12);
  obj.func("Alex");
  return 0;
}

