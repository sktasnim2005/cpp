#include<iostream>
using namespace std;
inline int add(int a,int b)
{
  return a+b;
}
int main()
{
  int value=add(10,90);
  cout<<value<<endl;
  cout<<add(1,9);
  return 0;
}
