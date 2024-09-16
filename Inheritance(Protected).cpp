#include<iostream>
using namespace std;
class parent{
    public:
     string name = "Tasnim";
    protected:
      int id =1460;
    private:
      int pin = 1234 ;
};
class child : protected parent{
  public:
    void print(){
         cout<<"Name = "<<name<<endl;
         cout<<"ID = "<<id<<endl;
         //cout<<"pin = "<<pin<<endl;
         cout<<"Z is private"<<endl;
    }
};

int main()
{
    child ob;
    ob.print();
    return 0;
}


