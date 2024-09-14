#include<iostream>
using namespace std;
class room
{
          public:
           int length,breadth,height;
           int getArea()
          {
                return length * breadth;
           }
          int getVolume()
          {
                return length * breadth * height;
          }
 };
int main()
{
  room r1;
  r1.length=21;
  r1.breadth=18;
  r1.height=10;
  cout<<"Area = "<< r1.getArea()<<endl;
  cout<<"Volume = "<< r1.getVolume()<<endl;
  return 0;
}

