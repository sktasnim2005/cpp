#include<iostream>
using namespace std;

class A{
    int n;

    public:
    A(){
        n=0;
    }
    void operator++()
    {
        ++n;
    }
    void operator++(int)
    {
        ++n;
    }
    void display()
    {
        cout<<"Value: "<<n<<endl;
    }

};

int main()
{
    A ob;
    ob.display();
    ++ob;
    ob.display();
    ob++;
    ob.display();

    return 0;

}
/*Prefix increment operator:
void operator++() {
    ++n;
}
This function is called when you use the ++ operator before the object (e.g., ++ob).
Postfix increment operator:
void operator++(int) {
    ++n;
}
This function is called when you use the ++ operator after the object (e.g., ob++).
The int parameter is a dummy parameter used to distinguish between the prefix and postfix versions of the operator.
*/
