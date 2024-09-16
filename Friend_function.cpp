#include<iostream>
using namespace std;
class A
{
  private:
    int pv;
  protected:
    int pr;
  public:
     void setPrivate(int x){
        pv=x;
     }
     void setProtected(int x){
        pr=x;
     }
     friend void fun(A &obj);
};
void fun(A &obj){
 cout<<"Private value = "<<obj.pv<<endl;
 cout<<"Protected value = "<<obj.pr<<endl;
}
int main()
{
  A ob;
  ob.setPrivate(100);
  ob.setProtected(200);
  fun(ob);

  return 0;
}

