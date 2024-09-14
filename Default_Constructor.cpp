#include<iostream>
using namespace std;
class Test
{
  public:
   int ID;
   string name;
   Test()
   {
     cout<<"Constructor is autometically called"<<endl;
     ID=1460;
     name="Tasnim";
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
   }
};
int main()
{
  Test ob;
  return 0;
}
