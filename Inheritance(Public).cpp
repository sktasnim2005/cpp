#include<iostream>
using namespace std;
class parent{
    public:
     int x=1;
    protected:
      int y=2;
    private:
      int z=3;
};
class child : public parent{
  public:
    void print(){
         cout<<"X = "<<x<<endl;
         cout<<"Y = "<<y<<endl;
         cout<<"Z is private"<<endl;
    }
};

int main()
{
    child ob;
    ob.print();
    return 0;
}

