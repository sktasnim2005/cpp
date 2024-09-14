#include<iostream>
using namespace std;
class Test
{
 protected:
   int ID=1460;
   string name="Tasnim";
};
class Test2:public Test // here  inheritance access modifier
{

   //int ID=1460;
   //string name="Tasnim";  data hiding
  public:
   void show()
   {
     cout<<"ID is "<<ID<<endl;
     cout<<"Name is "<<name<<endl;
   }
};
int main()
{
  Test2 ob1;
  ob1.show();
  return 0;
}


