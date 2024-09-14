#include<iostream>
using namespace std;
class method
{
          public:
           double a,b,c;
           double add()
          {
                return a+b;
           }
 };
int main()
{
  method obj;
  obj.a=5;
  obj.b=6;
  cout<<"Sum = "<<obj.add()<<endl;
  return 0;
}

