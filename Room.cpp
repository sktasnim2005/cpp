#include<iostream>
using namespace std;
class Room
{
          public:
           double length;
           double breadth;
           double height;
           double calculateArea()
          {
                return length * breadth;
           }
          double calculateVolume()
          {
                return length * breadth * height;
          }
 };
int main()
{
  Room r1,r2;
  r1.length=20;
  r1.breadth=10;
  cout<<"r1 Area = "<< r1.calculateArea()<<endl;
  r2.length=21;
  r2.breadth=18;
  r2.height=10;
  cout<<"r2 Area = "<< r2.calculateArea()<<endl;
  cout<<"r2 Volume = "<< r2.calculateVolume()<<endl;
  return 0;
}
