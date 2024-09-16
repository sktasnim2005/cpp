#include<iostream>
using namespace std;
class Test
{
 public:
   int ID;
   string name;
   int age;
   Test(int x,string y)
   {
     ID=x;
     name=y;
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
   }
   Test(int x,string y,int z)
   {
     ID=x;
     name=y;
     age=z;
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
     cout<<"Age is "<<age<<endl;
   }
   Test()
   {
     cout<<"Constructor is autometically called"<<endl;
   }
};

int main()
{
  Test ob,st1(1460,"Tasnim",21);
  Test st2(1475,"Akash");
  return 0;
}





