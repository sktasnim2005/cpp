#include<iostream>
using namespace std;
int fun(int *x,int *y)
{
  *x=20;
  *y=10;
}
int main()
{
  int x=10,y=20;
  fun(&x,&y);
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
  return 0;
}

