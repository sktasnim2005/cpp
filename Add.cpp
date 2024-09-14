 #include<iostream>
using namespace std;
class method
{
 public:
   int a,b;
   int add()
   {
     return a+b;
   }
};
int main()
{
  method ob1;
  ob1.a=5;
  ob1.b=6;

  cout<<ob1.add();
}
