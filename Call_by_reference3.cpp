#include<iostream>
using namespace std;
int func(int *x,int *y)
{
  int z=*x;
  *x=*y;
  *y=z;
}
int main()
{
  int x=200,y=300;
  func(&x,&y);
  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;
  return 0;
}
