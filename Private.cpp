#include<iostream>
using namespace std;
class Test
{
   private:
           int ID=1460;
           string name="Tasnim";
   public:
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
