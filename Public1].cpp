#include<iostream>
using namespace std;
class Test
{
 public:
   int ID;
   string name;
   Test(int x,string y): ID(x), name(y) { // Use initializer list to assign values

     x=ID;
     y=name;
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
   }
   Test()
   {
     cout<<"Constructor is autometically called"<<endl;
   }
};
int main()
{
  Test ob;
  Test st1(14,"Tom");
  Test st2(15,"Tomas");

  return 0;
}

