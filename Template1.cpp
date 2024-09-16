#include<iostream>
using namespace std;
template<typename T> T mMax(T x,T y)
{
  return (x>y) ? x: y ;
}
int main()
{
  cout << mMax<int>(3, 7) << endl;
  cout << mMax<double>(3.3, 7.2) << endl;
  cout << mMax<char>('g', 'e') << endl;
 return 0;
}
