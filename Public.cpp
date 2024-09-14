#include<iostream>
using namespace std;
class Test
{
 public:
   int ID=1460;
   string name="Tasnim";
   void show()
   {
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
   }
};
int main()
{
  Test ob1;
  ob1.show();

  return 0;
}
