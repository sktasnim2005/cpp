#include<iostream>
using namespace std;
//call by reference using pointers
void func(int *x,int *y)
{
   int func;
   func=*x;
   *x=*y;
   *y=func;
}
int main()
{
  int x=200,y=300;
  func(&x,&y);//pass value to the function
  cout<<"Value of x ="<<x<<endl;
  cout<<"Value of y ="<<y<<endl;



  return 0;
}

