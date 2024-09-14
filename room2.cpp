#include<iostream>
using namespace std;
class room
{
          public:
           int getArea(int length,int breadth)
          {
                return length * breadth;
           }
          int getVolume(int length,int breadth,int height)
          {
                return length * breadth * height;
          }
 };
int main()
{
  room r1;
  cout<<"Area = "<< r1.getArea(10,20)<<endl;
  cout<<"Volume = "<< r1.getVolume(10,20,30)<<endl;
  return 0;
}


