#include<iostream>
using namespace std;
int fun(int x,int y)// here x ,y are formal parameter
{
  x=20;
  y=10;
}
int main()
{
  int x=10,y=20;
  fun(x,y);// here x ,y are actual parameter
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
  return 0;
}
