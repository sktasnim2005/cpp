#include<iostream>
using namespace std;
class parent{
    public:
     string name = "Tasnim";
    protected:
      long long Account =1011234;
    private:
      long long Money = 12345678 ;
};
class child : private parent{
  public:
    void print(){
         cout<<"Name = "<<name<<endl;
         cout<<"Account = "<<Account<<endl;
         //cout<<"Money = "<<Money<<endl;
         cout<<"Money is private"<<endl;
    }
};

int main()
{
    child ob;
    ob.print();
    return 0;
}


